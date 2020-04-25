printstr:
    mov ah, 0x0e ; BIOS teletype output
    mov al, [si]   ; put low byte of bx to al
    int 0x10     ; print it.
    inc si
    cmp al, 0    ; Compare if its a string termination character?
    jne printstr
    popa
    ret
