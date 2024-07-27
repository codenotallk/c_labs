bits 64

global assembly
assembly:
    mov rax, 1234
    jmp .end

    mov rax, 4321 ; It will be jumped
    
.end:
    
    ret