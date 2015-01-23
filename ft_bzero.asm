global _ft_bzero

_ft_bzero:

while:
	cmp esi, 0
	jle end
	mov byte [rdi], 0
	add esi, -1
	add rdi, 1
jmp while

end:
	ret
