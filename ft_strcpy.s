section	.text
	global	_ft_strcpy

_ft_strcpy:
			push	rcx
			mov		rcx, 0					; i = 0
			cmp		rsi, 0					; rsi = src
			jz		reterror					; si rsi == 0 return
			jmp		copy
copy:
			mov		dl, BYTE [rsi + rcx]	;copie src[rcx] dans dl
			mov		BYTE [rdi + rcx], dl	;cp dl dans dst
			cmp		[rsi + rcx], BYTE 0			;si dl == \0
			je		return
			inc		rcx
			jmp 	copy
reterror:
			mov		rax, rsi				; return dst
			ret
return:
			mov		rax, rdi				; return dst
			pop		rcx
			ret
