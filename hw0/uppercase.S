        .section .data
input_string:   .asciz "!@#$this world is pice o fshit[]!"

        # tohost/fromhost are data locations used by Spike
        .align 8
tohost: .byte 0
        .align 8
fromhost: .byte 0

        
        .section .text
        .globl _start
_start:
        # Load the address of the input string into a0
        la a0, input_string

convert_loop:
        lbu t1, 0(a0)
        beqz t1, end_program

        #if not the end
        li t2,'a'
        li t3,'z'
        blt t1, t2, skip
        bgt t1,t3,skip

        #a character between a and z
        li t4,0x20
        sub t1, t1, t4
        sb t1,0(a0)

skip:
        add a0, a0,1
        j convert_loop
end_program:
        # jump here when you're done
        j end_program

