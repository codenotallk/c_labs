bits 64

global assembly
assembly:
    mov rax, 0  ; move 0 to rax. But the function_a is called so 
                ; it will be no longer 0 but 10
    call function_a 
    ret

function_a:
    mov rax, 10
    ret