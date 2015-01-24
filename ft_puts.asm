section .data
	msg:
		db	`(NULL)\n`
	lenth equ $ - msg

section .text
global _ft_puts

_ft_puts:
	push		rbx
	push		rsi
	push		rdi
	push		r8
	push		r9
	mov			r9, 0
	mov			rax, rdi
	mov			ebx, 1
	test		rax, rax
	jnz			len

null:
	mov			rdi, msg
	mov			r8, msg
	add			r8, 7
	mov			rax, r8
	mov			ebx, 7
	mov			r9, -1
	jmp			syscal

len:
	cmp byte	[rax], 0
	je			syscal
	add			ebx, 1
	add			rax, 1
	jmp			len

syscal:
	push		rax
	mov byte	[rax], 10
	mov			edx, ebx
	mov			rsi, rdi
	mov			edi, 1
	mov			rax, 0x2000004
	syscall
	cmp			eax, -1
	je			error
	cmp			r9, -1
	je			error
	pop			r9
	pop			rcx
	pop			r8
	mov	byte	[rcx], 0
	pop			rdi
	pop			rsi
	pop			rbx
	mov			eax, 1
	ret

error:
	pop			r9
	pop			rcx
	pop			r8
	pop			rdi
	pop			rsi
	pop			rbx
	mov			eax, -1
