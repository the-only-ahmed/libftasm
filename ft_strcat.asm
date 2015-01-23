global _ft_strcat

_ft_strcat:
	push	rdi
	mov rax, rdi

while:
	cmp byte [rax], 0
	je loop
	add rax, 1
jmp while

loop:
	cmp byte [rsi], 0
	je end
	mov dl, [rsi]
	mov [rax], dl
	add rax, 1
	add rsi, 1
jmp loop

end:
	mov byte [rax], 0
	pop rax
	ret
