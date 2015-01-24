section .text
global _ft_tolower

_ft_tolower:
	mov eax, edi

	cmp edi, 65
	jge cmp2
	jmp end

cmp2:
	cmp edi, 90
	jle low
	jmp end

low:
	add eax, 32
	jmp end

end:
	ret
