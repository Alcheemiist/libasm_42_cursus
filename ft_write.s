

section .text
global  _ft_write ; fd = rdi, buffer = rsi, bytes = rdx

_ft_write:
    mov rax, 0x2000004
    syscall
    jc error
    ret

error :
    mov rax, -1
    ret
