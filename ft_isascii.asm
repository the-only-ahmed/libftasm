section .text
global _ft_isascii

_ft_isascii:
	mov eax, 1

	cmp edi, 0
	jge cmp2
	jmp fail

cmp2:
	cmp edi, 127
	jle end
	jmp fail

fail:
	mov eax, 0
	jmp end

end:
	ret
