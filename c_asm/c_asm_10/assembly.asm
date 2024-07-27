bits 64

global var
section .data
    var: dd 10  ; It will be initialized with 10

section .text

global assembly
assembly:
    add dword [var], 3  ; Add 3 to 10 = 13
    ret