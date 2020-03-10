section	.text
	global	_ft_strcpy

_ft_strcpy:
			xor		rcx, rcx				; i = 0
			cmp		rsi, 0					; rsi = src
			jz		return					; si rsi == 0 return
			jmp		copy
copy:
			mov		dl, BYTE [rsi + rcx]	;copie src[rcx] dans dl
			mov		BYTE [rdi + rcx], dl	;cp dl dans dst
			cmp		dl, 0					;si dl == \0
			je		return
			inc		rcx
			jmp 	copy
return:
			mov		rax, rdi				; return dst
			ret
