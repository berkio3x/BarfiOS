mov ah, 0x0e
mov al, 'B'
int 0x10
mov al, 'a'
int 0x10
mov al, 'r'
int 0x10
mov al, 'f'
int 0x10
mov al, 'i'
int 0x10

mov al, 'O'
int 0x10
mov al, 'S'
int 0x10
jmp $

times  510-($-$$) db 0
dw  0xaa55
