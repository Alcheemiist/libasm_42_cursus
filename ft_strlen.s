section .text
global  _ft_strlen

_ft_strlen :
    xor rcx, rcx

loop :
    cmp BYTE [rdi + rcx], 0
    je end
    inc rcx
    call loop

end :
    mov rax, rcx
    ret