bits 64

section .text

global assembly
assembly:
    mov rax, 60     ; syscall exit number 
    mov rdi, 0      ; exit (0)
    syscall
    ret