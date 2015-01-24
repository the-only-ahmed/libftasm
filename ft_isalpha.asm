section .text
global _ft_isalpha

_ft_isalpha:
	mov eax, 1

	cmp edi, 65
	jge cmp2
	jmp fail

cmp2:
	cmp edi, 90
	jle end
	jmp cmp3

cmp3:
	cmp edi, 97
	jge cmp4
	jmp fail

cmp4:
	cmp edi, 122
	jle end
	jmp fail

fail:
	mov eax, 0
	jmp end

end:
	ret
