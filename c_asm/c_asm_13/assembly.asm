bits 64

section .data
    message: db `Hello World!\n`
    message_size equ $-message     ;gets string size

section .text

global assembly

assembly:
    mov rax, 1      ; syscall write
    mov rdi, 1      ; 
    mov rsi, message
    mov rdx, message_size
    syscall

    mov rax, 60     ; syscall exit number 
    mov rdi, 0      ; exit (0)
    syscall

    ret