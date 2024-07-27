bits 64

extern number ; will be received from c code

section .text

global assembly
assembly:
    call number ; the return value will be stored in rax and we add 10
    add rax, 10 ; 10 + 10 = 20
   
    ret