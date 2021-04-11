
section .text
global  _ft_strlen

_ft_strlen :
    xor     rcx, rcx
    xor		rax, rax
    cmp		BYTE [rdi], 0
	je		end
	call 	loop
	ret

loop :
    cmp     BYTE [rdi + rcx], 0
    je      end
    inc     rcx
    call    loop

end :
    mov     rax, rcx
    ret
