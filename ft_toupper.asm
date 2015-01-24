section .text
global _ft_toupper

_ft_toupper:
	mov eax, edi

	cmp edi, 97
	jge cmp2
	jmp end

cmp2:
	cmp edi, 122
	jle low
	jmp end

low:
	add eax, -32
	jmp end

end:
	ret
