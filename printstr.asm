printstr:
    mov ah, 0x0e ; BIOS teletype output
    mov al, [bx]   ; put low byte of bx to al
    inc bx
    cmp al, 0    ; Compare if its a string termination character?
    int 0x10     ; print it.
    jne printstr
