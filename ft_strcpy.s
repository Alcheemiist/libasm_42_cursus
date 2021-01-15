section .text
global _ft_strcpy

_ft_strcpy : 
    mov r8, rdi
    mov r9, rsi
    mov rcx, 0
loop :
    cmp BYTE [r9 + rcx] , 0
    je  end
    mov r10, [r9 + rcx]
    mov [r8 + rcx], r10
    inc rcx
    call loop

end :
    mov  BYTE [r8 + rcx], 0
    mov rax, r8
    ret