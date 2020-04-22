[org 0x7c00] ; Tell the assember the place to load this code

    mov bx, HELLO_MSG ; move the data to the bx register
    call printstr     ; call printstr routine

    %include "printstr.asm"

; Data
HELLO_MSG:
    db 'Hello world BarfiOS!', 0

jmp $

times  510-($-$$) db 0
dw  0xaa55

