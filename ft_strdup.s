section .text
	global _ft_strdup
	extern _ft_strlen
	extern _ft_strcpy
	extern _malloc

_ft_strdup:
	cmp		rdi, 0x0
	je		_error_dup
	call	_ft_strlen
	inc		rax
	push	rdi
	mov		rdi, rax
	call	_malloc
	cmp		rax, 0x0
	je		_error_dup
	pop		rdi
	push	rsi
	mov		rsi, rdi
	mov		rdi, rax
	call	_ft_strcpy
	pop		rsi
	ret

_error_dup:
	mov		rax, 0x0
	ret
	