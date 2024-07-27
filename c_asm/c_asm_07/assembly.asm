bits 64

global assembly
assembly:

    mov rax, 2
    mov rbx, 3
    mul rbx     ; 2*3 = 6

    shl rax, 1  ; 6 << 1 = 6 * 2 = 12
    ret