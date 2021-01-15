section .text
global _ft_read

_ft_read :
    cmp rdi, 0
    jl  error
    cmp rsi, 0
    je error
    cmp rdx, 0
    jl error
    mov rax, 0x2000003
    syscall
    ret

error :
    mov rax, -1
    ret