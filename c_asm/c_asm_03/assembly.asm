bits 64

global assembly
assembly:
    mov rax, 1234
    push rax

    mov rax, 4321 ; It will be overrided
    pop rax
    
    ret