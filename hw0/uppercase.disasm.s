
uppercase.bin:     file format elf32-littleriscv


Disassembly of section .text:

00010074 <_start>:
   10074:	ffff2517          	auipc	a0,0xffff2
   10078:	f8c50513          	addi	a0,a0,-116 # 2000 <__DATA_BEGIN__>

0001007c <convert_loop>:
   1007c:	00054303          	lbu	t1,0(a0)
   10080:	02030463          	beqz	t1,100a8 <end_program>
   10084:	06100393          	li	t2,97
   10088:	07a00e13          	li	t3,122
   1008c:	00734a63          	blt	t1,t2,100a0 <skip>
   10090:	006e4863          	blt	t3,t1,100a0 <skip>
   10094:	02000e93          	li	t4,32
   10098:	41d30333          	sub	t1,t1,t4
   1009c:	00650023          	sb	t1,0(a0)

000100a0 <skip>:
   100a0:	00150513          	addi	a0,a0,1
   100a4:	fd9ff06f          	j	1007c <convert_loop>

000100a8 <end_program>:
   100a8:	0000006f          	j	100a8 <end_program>
