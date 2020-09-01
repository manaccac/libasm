section .text
	global _ft_write
	extern	___error

_ft_write:
			mov		rax, 0x2000004
			syscall
			jc error
			ret

error:
	mov rdx, rax				; on cree un temp
	call ___error				; on recup le errno
	mov	[rax], rdx				; 
	mov	rax, -1
	ret