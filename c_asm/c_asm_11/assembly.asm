bits 64

global var
section .bss
    var: resd 1 ; reserve but not initilize

section .text

global assembly
assembly:
    add dword [var], 1234
    ret