section .text
global _ft_strdup

extern _ft_strlen
extern _ft_strcpy
extern _malloc
extern ___error

_ft_strdup : 
    xor     rax, rax
    xor     rcx, rcx
    xor     r9, r9

    push rdi
    call _ft_strlen
    inc rax
    mov rdi, rax
    call _malloc
    jc      error
    cmp     rax, 0
    je      return
    mov     rdi, rax
    pop     rsi
    call    _ft_strcpy
    ret

return:
    call    ___error
    mov     rax, 0
	ret

error:
    push    rax
    mov     BYTE [rax], 12
    mov     rax, -1
    ret  
