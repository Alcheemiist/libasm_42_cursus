section .text
extern  ___error

global  _ft_write ; fd = rdi, buffer = rsi, bytes = rdx

_ft_write:
    mov     rax, 0x2000004
    syscall
    jc      error
    ret

error:
    push	rax             ; save errno 
    call	___error        ; retrieve address to errno 
    pop		r8              
    mov		[rax], r8       ; put errno in return value of __error (pointer to errno)
    mov		rax, -1
    ret
