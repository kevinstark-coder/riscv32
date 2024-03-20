#int A[20];
#int sum = 0;
#for (int i = 0; i < 20; i++) {
#   sum += A[i];
#}

    .data
A:  .word 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1  # Array A with 20 elements, each initialized to 1
sum: .word 0  # Initialize sum to 0

        # tohost/fromhost are data locations used by Spike
        .align 8
tohost: .byte 0
        .align 8
fromhost: .byte 0

    .text
    .globl _start
_start:
    li t0, 0     # t0 will be our loop counter, i, initialized to 0
    li t1, 0     # t1 will hold the sum, initialized to 0
    la t2, A     # t2 will hold the base address of the array A

loop:
    li t5, 20
    blt t0, t5, loop_body  # If t0 < 20, continue loop; otherwise, exit
    j end_loop

loop_body:
    lw t3, 0(t2)           # Load the current element of A into t3
    add t1, t1, t3         # Add the current element to the sum
    addi t2, t2, 4         # Move to the next element in the array (4 bytes ahead for a 32-bit integer)
    addi t0, t0, 1         # Increment our loop counter
    j loop                 # Jump back to the start of the loop

end_loop:
    sw t1, sum             # Store the final sum in the sum variable