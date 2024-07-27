bits 64

global assembly
assembly:
    mov rax, 0
    mov rbx, 7
    mov rcx, 5
    cmp rbx, rcx
    ;jge .end   ; condition true rbx > rcx
    jle .end    ; condition false rbx is not less equal than rcx

    mov rax, 1  ; It will be jumped if the compare is true
    
.end:
    
    ret