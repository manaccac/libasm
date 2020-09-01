section .text
	global	_ft_read
	extern	___error

_ft_read:
	mov rax, 0x2000003
	syscall
	jc error
	ret

error:
	mov rdx, rax				; on cree un temp
	call ___error				; on recup le errno
	mov	[rax], rdx				; restore rax
	mov	rax, -1
	ret