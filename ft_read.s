section .text
global _ft_read

extern ___error 

_ft_read :
    mov rax, 0x2000003
    syscall
    jc error
    ret

error:
    push	rax             ; save errno 
    call	___error        ; retrieve address to errno 
    pop		r8              
    mov		[rax], r8       ; put errno in return value of __error (pointer to errno)
    mov		rax, -1
    ret
