`timescale 1ns / 1ns

// registers are 32 bits in RV32
`define REG_SIZE 31:0

// RV opcodes are 7 bits
`define OPCODE_SIZE 6:0

// `include "../hw2a/divider_unsigned.sv"
// `include "../hw2b/cla.sv"

module RegFile (
    input logic we,
    input logic [4:0] rd,
    input logic [`REG_SIZE] rd_data,

    input logic [4:0] rs1,
    output logic [`REG_SIZE] rs1_data,  
    input logic [4:0] rs2,
    output logic [`REG_SIZE] rs2_data,

    input logic clk,
    input logic rst
);
  localparam int NumRegs = 32;
  logic [`REG_SIZE] regs[NumRegs];

  integer i;
  // TODO: your code here
    always@(posedge clk)
    begin
      if(rst)
        begin
          for(i=0;i<32;i=i+1)
          begin
            regs[i] <= 32'b0;
          end
        end
      else
      begin
        if(we && rd!=5'b0) regs[rd] <= rd_data;
      end
    end

  
  always@(*) begin
    if(rst)  
      begin
        rs1_data = 32'b0;
        rs2_data = 32'b0;
      end
    else
      begin
        rs1_data = regs[rs1];
        rs2_data = regs[rs2];
      end
  end
endmodule


module DatapathSingleCycle (
    input wire clk,
    input wire rst,
    output logic halt,
    output logic [`REG_SIZE] pc_to_imem,
    input wire [`REG_SIZE] insn_from_imem,
    // addr_to_dmem is a read-write port
    output wire [`REG_SIZE] addr_to_dmem,
    input logic [`REG_SIZE] load_data_from_dmem,
    output wire [`REG_SIZE] store_data_to_dmem,
    output wire [3:0] store_we_to_dmem
);

  // components of the instruction
  wire [6:0] insn_funct7;
  wire [4:0] insn_rs2;
  wire [4:0] insn_rs1;
  wire [2:0] insn_funct3;
  wire [4:0] insn_rd;
  wire [`OPCODE_SIZE] insn_opcode;

  

  // split R-type instruction - see section 2.2 of RiscV spec
  assign {insn_funct7, insn_rs2, insn_rs1, insn_funct3, insn_rd, insn_opcode} = insn_from_imem;

  // setup for I, S, B & J type instructions
  // I - short immediates and loads
  wire [11:0] imm_i;
  assign imm_i = insn_from_imem[31:20];
  wire [ 4:0] imm_shamt = insn_from_imem[24:20];

  // S - stores
  wire [11:0] imm_s;
  assign imm_s[11:5] = insn_funct7, imm_s[4:0] = insn_rd;

  // B - conditionals //yqk, immediates tar12 becomes directly 13 bit here by setting imm_b[0]= 1'n0
  wire [12:0] imm_b;
  assign {imm_b[12], imm_b[10:5]} = insn_funct7, {imm_b[4:1], imm_b[11]} = insn_rd, imm_b[0] = 1'b0;

  // J - unconditional jumps
  wire [20:0] imm_j;
  assign {imm_j[20], imm_j[10:1], imm_j[11], imm_j[19:12], imm_j[0]} = {insn_from_imem[31:12], 1'b0};

  wire [`REG_SIZE] imm_i_sext = {{20{imm_i[11]}}, imm_i[11:0]};
  wire [`REG_SIZE] imm_s_sext = {{20{imm_s[11]}}, imm_s[11:0]};
  wire [`REG_SIZE] imm_b_sext = {{19{imm_b[12]}}, imm_b[12:0]};
  wire [`REG_SIZE] imm_j_sext = {{11{imm_j[20]}}, imm_j[20:0]};

  // opcodes - see section 19 of RiscV spec
  localparam bit [`OPCODE_SIZE] OpLoad = 7'b00_000_11;
  localparam bit [`OPCODE_SIZE] OpStore = 7'b01_000_11;
  localparam bit [`OPCODE_SIZE] OpBranch = 7'b11_000_11;
  localparam bit [`OPCODE_SIZE] OpJalr = 7'b11_001_11;
  localparam bit [`OPCODE_SIZE] OpMiscMem = 7'b00_011_11;
  localparam bit [`OPCODE_SIZE] OpJal = 7'b11_011_11;

  localparam bit [`OPCODE_SIZE] OpRegImm = 7'b00_100_11;
  localparam bit [`OPCODE_SIZE] OpRegReg = 7'b01_100_11;
  localparam bit [`OPCODE_SIZE] OpEnviron = 7'b11_100_11;

  localparam bit [`OPCODE_SIZE] OpAuipc = 7'b00_101_11;
  localparam bit [`OPCODE_SIZE] OpLui = 7'b01_101_11;

  wire insn_lui = insn_opcode == OpLui;
  wire insn_auipc = insn_opcode == OpAuipc;
  wire insn_jal = insn_opcode == OpJal;
  wire insn_jalr = insn_opcode == OpJalr;

  wire insn_beq = insn_opcode == OpBranch && insn_from_imem[14:12] == 3'b000;
  wire insn_bne = insn_opcode == OpBranch && insn_from_imem[14:12] == 3'b001;
  wire insn_blt = insn_opcode == OpBranch && insn_from_imem[14:12] == 3'b100;
  wire insn_bge = insn_opcode == OpBranch && insn_from_imem[14:12] == 3'b101;
  wire insn_bltu = insn_opcode == OpBranch && insn_from_imem[14:12] == 3'b110;
  wire insn_bgeu = insn_opcode == OpBranch && insn_from_imem[14:12] == 3'b111;

  wire insn_lb = insn_opcode == OpLoad && insn_from_imem[14:12] == 3'b000;
  wire insn_lh = insn_opcode == OpLoad && insn_from_imem[14:12] == 3'b001;
  wire insn_lw = insn_opcode == OpLoad && insn_from_imem[14:12] == 3'b010;
  wire insn_lbu = insn_opcode == OpLoad && insn_from_imem[14:12] == 3'b100;
  wire insn_lhu = insn_opcode == OpLoad && insn_from_imem[14:12] == 3'b101;

  wire insn_sb = insn_opcode == OpStore && insn_from_imem[14:12] == 3'b000;
  wire insn_sh = insn_opcode == OpStore && insn_from_imem[14:12] == 3'b001;
  wire insn_sw = insn_opcode == OpStore && insn_from_imem[14:12] == 3'b010;

  wire insn_addi = insn_opcode == OpRegImm && insn_from_imem[14:12] == 3'b000;
  wire insn_slti = insn_opcode == OpRegImm && insn_from_imem[14:12] == 3'b010;
  wire insn_sltiu = insn_opcode == OpRegImm && insn_from_imem[14:12] == 3'b011;
  wire insn_xori = insn_opcode == OpRegImm && insn_from_imem[14:12] == 3'b100;
  wire insn_ori = insn_opcode == OpRegImm && insn_from_imem[14:12] == 3'b110;
  wire insn_andi = insn_opcode == OpRegImm && insn_from_imem[14:12] == 3'b111;

  wire insn_slli = insn_opcode == OpRegImm && insn_from_imem[14:12] == 3'b001 && insn_from_imem[31:25] == 7'd0;
  wire insn_srli = insn_opcode == OpRegImm && insn_from_imem[14:12] == 3'b101 && insn_from_imem[31:25] == 7'd0;
  wire insn_srai = insn_opcode == OpRegImm && insn_from_imem[14:12] == 3'b101 && insn_from_imem[31:25] == 7'b0100000;

  wire insn_add = insn_opcode == OpRegReg && insn_from_imem[14:12] == 3'b000 && insn_from_imem[31:25] == 7'd0;
  wire insn_sub  = insn_opcode == OpRegReg && insn_from_imem[14:12] == 3'b000 && insn_from_imem[31:25] == 7'b0100000;
  wire insn_sll = insn_opcode == OpRegReg && insn_from_imem[14:12] == 3'b001 && insn_from_imem[31:25] == 7'd0;
  wire insn_slt = insn_opcode == OpRegReg && insn_from_imem[14:12] == 3'b010 && insn_from_imem[31:25] == 7'd0;
  wire insn_sltu = insn_opcode == OpRegReg && insn_from_imem[14:12] == 3'b011 && insn_from_imem[31:25] == 7'd0;
  wire insn_xor = insn_opcode == OpRegReg && insn_from_imem[14:12] == 3'b100 && insn_from_imem[31:25] == 7'd0;
  wire insn_srl = insn_opcode == OpRegReg && insn_from_imem[14:12] == 3'b101 && insn_from_imem[31:25] == 7'd0;
  wire insn_sra  = insn_opcode == OpRegReg && insn_from_imem[14:12] == 3'b101 && insn_from_imem[31:25] == 7'b0100000;
  wire insn_or = insn_opcode == OpRegReg && insn_from_imem[14:12] == 3'b110 && insn_from_imem[31:25] == 7'd0;
  wire insn_and = insn_opcode == OpRegReg && insn_from_imem[14:12] == 3'b111 && insn_from_imem[31:25] == 7'd0;

  wire insn_mul    = insn_opcode == OpRegReg && insn_from_imem[31:25] == 7'd1 && insn_from_imem[14:12] == 3'b000;
  wire insn_mulh   = insn_opcode == OpRegReg && insn_from_imem[31:25] == 7'd1 && insn_from_imem[14:12] == 3'b001;
  wire insn_mulhsu = insn_opcode == OpRegReg && insn_from_imem[31:25] == 7'd1 && insn_from_imem[14:12] == 3'b010;
  wire insn_mulhu  = insn_opcode == OpRegReg && insn_from_imem[31:25] == 7'd1 && insn_from_imem[14:12] == 3'b011;
  wire insn_div    = insn_opcode == OpRegReg && insn_from_imem[31:25] == 7'd1 && insn_from_imem[14:12] == 3'b100;
  wire insn_divu   = insn_opcode == OpRegReg && insn_from_imem[31:25] == 7'd1 && insn_from_imem[14:12] == 3'b101;
  wire insn_rem    = insn_opcode == OpRegReg && insn_from_imem[31:25] == 7'd1 && insn_from_imem[14:12] == 3'b110;
  wire insn_remu   = insn_opcode == OpRegReg && insn_from_imem[31:25] == 7'd1 && insn_from_imem[14:12] == 3'b111;

  wire insn_ecall = insn_opcode == OpEnviron && insn_from_imem[31:7] == 25'd0;
  wire insn_fence = insn_opcode == OpMiscMem;

  // synthesis translate_off
  // this code is only for simulation, not synthesis
  `include "RvDisassembler.sv"
  string disasm_string;
  always_comb begin
    disasm_string = rv_disasm(insn_from_imem);
  end
  // HACK: get disasm_string to appear in GtkWave, which can apparently show only wire/logic...
  wire [(8*32)-1:0] disasm_wire;
  genvar i;
  for (i = 0; i < 32; i = i + 1) begin : gen_disasm
    assign disasm_wire[(((i+1))*8)-1:((i)*8)] = disasm_string[31-i];
  end
  // synthesis translate_on

  // program counter
  logic [`REG_SIZE] pcNext, pcCurrent;
  always @(posedge clk) begin
    if (rst) begin
      pcCurrent <= 32'd0;
    end else begin
      pcCurrent <= pcNext;
    end
  end
  //question of pcnext yqk
  assign pc_to_imem = pcCurrent;

  // cycle/insn_from_imem counters
  logic [`REG_SIZE] cycles_current, num_insns_current;
  always @(posedge clk) begin
    if (rst) begin
      cycles_current <= 0;
      num_insns_current <= 0;
    end else begin
      cycles_current <= cycles_current + 1;
      if (!rst) 
      begin
        num_insns_current <= num_insns_current + 1;
      end
    end
  end


  logic illegal_insn;
//reg
  logic we;
  logic [`REG_SIZE] rd_data;
  logic [`REG_SIZE] rs1_data;
  logic [`REG_SIZE] rs2_data;
  // cla
  logic [`REG_SIZE] cla_a;
  logic [`REG_SIZE] cla_b;
  logic cla_cin;
  logic [`REG_SIZE] cla_sum;

  // divider
  logic [`REG_SIZE] div_dividend;
  logic [`REG_SIZE] div_divisor;
  logic [`REG_SIZE] div_remainder;
  logic [`REG_SIZE] div_quotient;

  // mul
  logic [63:0] mul;
  logic [63:0] mulh;
  logic [63:0] mulhsu;
  logic [63:0] mulhu;

  always_comb begin
    store_we_to_dmem = 4'b0000;
    store_data_to_dmem = 32'b0;
    addr_to_dmem = 32'b0;
    we = 1'b0;
    rd_data = 32'd0;

    cla_a = 32'd0;
    cla_b = 32'd0;
    cla_cin = 1'b0;

    div_dividend = 32'd0;
    div_divisor = 32'd0;
    
    mul = 64'd0;
    mulh = 64'd0;
    mulhsu = 64'd0;
    mulhu = 64'd0;

    pcNext = pcCurrent + 32'd4;
    
    halt = 1'b0;
    illegal_insn = 1'b0;
    case (insn_opcode)

      OpLui: begin
        //assign {insn_funct7, insn_rs2, insn_rs1, insn_funct3, insn_rd, insn_opcode} = insn_from_imem;
        we = 1;
        rd_data = {insn_from_imem[31:12],12'b0}; 
      end

      OpRegImm:begin
        we = 1'b1;
        if(insn_addi)begin
          cla_cin = 1'b0;
          cla_a = rs1_data;
          cla_b = imm_i_sext;
          rd_data = cla_sum;
        end
        else if(insn_slti)begin //yqk
          rd_data = $signed(rs1_data) < $signed(imm_i_sext) ? 32'b1:32'b0;
        end
        else if(insn_sltiu)begin //yqk
          rd_data = rs1_data < imm_i_sext ? 32'b1:32'b0;
        end
        else if(insn_xori)begin
          rd_data = rs1_data ^ imm_i_sext;
        end
        else if(insn_ori)begin
          rd_data = rs1_data | imm_i_sext;
        end
        else if(insn_andi)begin
          rd_data = rs1_data & imm_i_sext;
        end
        else if(insn_slli)begin //yqk
          rd_data = rs1_data << imm_i[4:0];
        end
        else if(insn_srli)begin //yqk
          rd_data = rs1_data >> imm_i[4:0];
        end
        else if(insn_srai)begin //yqk
          rd_data = $signed(rs1_data) >>> $signed(imm_i[4:0]);
        end
      end

      OpBranch: begin
        if (insn_beq) begin             
          if (rs1_data == rs2_data)
            pcNext = pcCurrent + imm_b_sext;

        end else if (insn_bne) begin
          if (rs1_data != rs2_data)
            pcNext = pcCurrent + imm_b_sext;

        end else if (insn_blt) begin
            if ($signed(rs1_data) < $signed(rs2_data))
              pcNext = pcCurrent + imm_b_sext;

        end else if (insn_bge) begin
            if ($signed(rs1_data) >= $signed(rs2_data))
              pcNext = pcCurrent + imm_b_sext;

        end else if (insn_bltu) begin
            if (rs1_data < rs2_data)
              pcNext = pcCurrent + imm_b_sext;

        end else if (insn_bgeu) begin
            if (rs1_data >= rs2_data)
            pcNext = pcCurrent + imm_b_sext;
        end
      end

      OpRegReg: begin
        we = 1'b1;
        if (insn_add) begin
          cla_a = rs1_data;
          cla_b = rs2_data;
          cla_cin = 1'b0;
          rd_data = cla_sum;

        end else if (insn_sub) begin
          cla_a = rs1_data;
          cla_b = ~rs2_data + 32'b1;
          cla_cin = 1'b0;
          rd_data = cla_sum;
            
        end else if (insn_sll) begin
          rd_data = rs1_data << rs2_data[4:0];

        end else if (insn_slt) begin
          rd_data = ($signed(rs1_data) < $signed(rs2_data)) ? 1:0;

        end else if (insn_sltu) begin
          rd_data = (rs1_data < rs2_data) ? 1:0;

        end else if (insn_xor) begin
          rd_data = rs1_data ^ rs2_data;

        end else if (insn_srl) begin
          rd_data = rs1_data >> rs2_data[4:0];

        end else if (insn_sra) begin
          rd_data = $signed(rs1_data) >>> rs2_data[4:0];

        end else if (insn_or) begin
          rd_data = rs1_data | rs2_data;

        end else if (insn_and) begin
          rd_data = rs1_data & rs2_data;

        end else if (insn_mul) begin
          mul = rs1_data * rs2_data;
          rd_data = mul[31:0];

        end else if (insn_mulh) begin
          mulh = $signed(rs1_data) * $signed(rs2_data);
          rd_data = mulh[63:32];

        end else if (insn_mulhsu) begin
          mulhsu = $signed(rs1_data) * rs2_data;
          rd_data = mulhsu[63:32];

        end else if (insn_mulhu) begin
          mulhu = rs1_data * rs2_data;
          rd_data = mulhu[63:32];

        end else if (insn_div) begin
          div_dividend = $signed(rs1_data);
          div_divisor = $signed(rs2_data);
          rd_data = div_quotient;
          
        end else if (insn_divu) begin
          div_dividend = rs1_data;
          div_divisor = rs2_data;
          rd_data = div_quotient;
          
        end else if (insn_rem) begin
          div_dividend = $signed(rs1_data);
          div_divisor = $signed(rs2_data);
          rd_data = div_remainder;
          
        end else if (insn_remu) begin        
          div_dividend = rs1_data;
          div_divisor = rs2_data;
          rd_data = div_remainder;
        
        end
      end

      OpEnviron: begin
        if (insn_ecall) begin
          halt = 1'b1;
          
        end
      end
      
      OpJal:begin
        rd_data = pcCurrent + 32'd4;
        pcNext  = pcCurrent + imm_j_sext;
      end

      OpJalr:begin
        we = 1'b1;
        rd_data = pcCurrent + 32'd4;
        pcNext  = (rs1_data + imm_i_sext)& (~32'b1);
      end

      OpAuipc: begin
        we = 1'b1;
        rd_data = pcCurrent + {insn_from_imem[31:12], 12'd0};
      end

      OpLoad: begin
        we = 1'b1;
        if (insn_lb) begin
          addr_to_dmem = rs1_data + imm_i_sext;
          rd_data = {{24{load_data_from_dmem[7]}},load_data_from_dmem[7:0]}; //yqk
        end 

        else if (insn_lh) begin
          addr_to_dmem = rs1_data + imm_i_sext;
          rd_data = {{16{load_data_from_dmem[15]}},load_data_from_dmem[15:0]}; //yqk
        end

        else if (insn_lw) begin
        addr_to_dmem = rs1_data + imm_i_sext;
        rd_data = load_data_from_dmem; //yqk
        end
        else if (insn_lbu)begin
          addr_to_dmem = rs1_data + imm_i_sext;
          rd_data = {24'b0,load_data_from_dmem[7:0]};
        end
        else if (insn_lhu)begin
          addr_to_dmem = rs1_data + imm_i_sext;
          rd_data = {16'b0,load_data_from_dmem[15:0]};
        end
      end

      OpStore:begin
        if(insn_sb)begin
          store_we_to_dmem = 4'b0001;
          store_data_to_dmem[7:0] = rs2_data[7:0];
          addr_to_dmem = rs1_data + imm_i_sext;
        end
        if(insn_sh)begin
          store_we_to_dmem = 4'b0011;
          store_data_to_dmem[15:0] = rs2_data[15:0];
          addr_to_dmem = rs1_data + imm_i_sext;
        end
        if(insn_sw)begin
          store_we_to_dmem = 4'b1111;
          store_data_to_dmem = rs2_data;
          addr_to_dmem = rs1_data + imm_i_sext;
        end
      end

      default: begin
        illegal_insn = 1'b1;
      end
      

    endcase
  end

RegFile rf(
    .we(we),
    .rd(insn_rd),
    .rd_data(rd_data),

    .rs1(insn_rs1),
    .rs1_data(rs1_data),  
    .rs2(insn_rs2),
    .rs2_data(rs2_data),

    .clk(clk),
    .rst(rst)
);

cla cla(
  .a(cla_a),
  .b(cla_b),
  .cin(cla_cin),
  .sum(cla_sum)
);

divider_unsigned div(
  .i_dividend(div_dividend),
  .i_divisor(div_divisor),
  .o_remainder(div_remainder),
  .o_quotient(div_quotient)
);

endmodule


/* A memory module that supports 1-cycle reads and writes, with one read-only port
 * and one read+write port.
 */
module MemorySingleCycle #(
    parameter int NUM_WORDS = 512
) (
    // rst for both imem and dmem
    input wire rst,

    // clock for both imem and dmem. See RiscvProcessor for clock details.
    input wire clock_mem,

    // must always be aligned to a 4B boundary
    input wire [`REG_SIZE] pc_to_imem,

    // the value at memory location pc_to_imem
    output logic [`REG_SIZE] insn_from_imem,

    // must always be aligned to a 4B boundary
    input wire [`REG_SIZE] addr_to_dmem,

    // the value at memory location addr_to_dmem
    output logic [`REG_SIZE] load_data_from_dmem,

    // the value to be written to addr_to_dmem, controlled by store_we_to_dmem
    input wire [`REG_SIZE] store_data_to_dmem,

    // Each bit determines whether to write the corresponding byte of store_data_to_dmem to memory location addr_to_dmem.
    // E.g., 4'b1111 will write 4 bytes. 4'b0001 will write only the least-significant byte.
    input wire [3:0] store_we_to_dmem
);

  // memory is arranged as an array of 4B words
  logic [`REG_SIZE] mem[NUM_WORDS];

  initial begin
    $readmemh("mem_initial_contents.hex", mem, 0);
  end

  always_comb begin
    // memory addresses should always be 4B-aligned
    assert (pc_to_imem[1:0] == 2'b00);
    assert (addr_to_dmem[1:0] == 2'b00);
  end

  localparam int AddrMsb = $clog2(NUM_WORDS) + 1;
  localparam int AddrLsb = 2;

  always @(posedge clock_mem) begin
    if (rst) begin
    end else begin
      insn_from_imem <= mem[{pc_to_imem[AddrMsb:AddrLsb]}];
    end
  end

  always @(negedge clock_mem) begin
    if (rst) begin
    end else begin
      if (store_we_to_dmem[0]) begin
        mem[addr_to_dmem[AddrMsb:AddrLsb]][7:0] <= store_data_to_dmem[7:0];
      end
      if (store_we_to_dmem[1]) begin
        mem[addr_to_dmem[AddrMsb:AddrLsb]][15:8] <= store_data_to_dmem[15:8];
      end
      if (store_we_to_dmem[2]) begin
        mem[addr_to_dmem[AddrMsb:AddrLsb]][23:16] <= store_data_to_dmem[23:16];
      end
      if (store_we_to_dmem[3]) begin
        mem[addr_to_dmem[AddrMsb:AddrLsb]][31:24] <= store_data_to_dmem[31:24];
      end
      // dmem is "read-first": read returns value before the write
      load_data_from_dmem <= mem[{addr_to_dmem[AddrMsb:AddrLsb]}];
    end
  end
endmodule

/*
This shows the relationship between clock_proc and clock_mem. The clock_mem is
phase-shifted 90° from clock_proc. You could think of one proc cycle being
broken down into 3 parts. During part 1 (which starts @posedge clock_proc)
the current PC is sent to the imem. In part 2 (starting @posedge clock_mem) we
read from imem. In part 3 (starting @negedge clock_mem) we read/write memory and
prepare register/PC updates, which occur at @posedge clock_proc.

        ____
 proc: |    |______
           ____
 mem:  ___|    |___
*/
module RiscvProcessor (
    input  wire  clock_proc,
    input  wire  clock_mem,
    input  wire  rst,
    output logic halt
);

  wire [`REG_SIZE] pc_to_imem, insn_from_imem, mem_data_addr, mem_data_loaded_value, mem_data_to_write;
  wire [3:0] mem_data_we;

  MemorySingleCycle #(
      .NUM_WORDS(8192)
  ) mem (
      .rst      (rst),
      .clock_mem (clock_mem),
      // imem is read-only
      .pc_to_imem(pc_to_imem),
      .insn_from_imem(insn_from_imem),
      // dmem is read-write
      .addr_to_dmem(mem_data_addr),
      .load_data_from_dmem(mem_data_loaded_value),
      .store_data_to_dmem (mem_data_to_write),
      .store_we_to_dmem  (mem_data_we)
  );

  DatapathSingleCycle datapath (
      .clk(clock_proc),
      .rst(rst),
      .pc_to_imem(pc_to_imem),
      .insn_from_imem(insn_from_imem),
      .addr_to_dmem(mem_data_addr),
      .store_data_to_dmem(mem_data_to_write),
      .store_we_to_dmem(mem_data_we),
      .load_data_from_dmem(mem_data_loaded_value),
      .halt(halt)
  );

endmodule
