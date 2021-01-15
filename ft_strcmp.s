section .text
global  _ft_strcmp

_ft_strcmp :
    mov rax, 0
    mov r10, 0
    mov r11, 0
    

loop:
    movzx r10, byte [rdi]
    movzx r11, byte [rsi]
    cmp r10, r11
    jne end
    inc rdi
    inc rsi
    jmp loop

end :
    movsx rax, r10w
    sub rax, r11
    ret