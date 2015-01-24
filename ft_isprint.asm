section .text
global _ft_isprint

_ft_isprint:
	mov eax, 1

	cmp edi, 32
	jge cmp2
	jmp fail

cmp2:
	cmp edi, 126
	jle end
	jmp fail

fail:
	mov eax, 0
	jmp end

end:
	ret
