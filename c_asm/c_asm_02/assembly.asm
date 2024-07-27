bits 64

global assembly
assembly:
    mov rbx, 5
    mov rcx, 10
    lea rax,  [rcx + rbx * 2 + 5] ; rbx * 2 = 10 + 5 = 15 + 10 = 25
    ret