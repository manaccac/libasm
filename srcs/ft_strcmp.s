section .text
	global _ft_strcmp

_ft_strcmp:
				mov		rcx, 0
				cmp		rdi, 0				; s1 exist
				jz		null
				cmp		rsi, 0				; s2 exist
				jz		null
				jmp		check

null:
				cmp		rdi, rsi
				je		same				; s1 == s2 (NULL)
				jl		inf					; s1 == NULL
				jmp		sup					; s2 == NULL

comp:
			mov		dl, BYTE [rsi + rcx]	; tmp = s2[i]
			cmp		BYTE [rdi + rcx], dl	; s1[i] == tmp
			jl		inf
			jg		sup
			inc		rcx
			jmp		check

check:
			cmp		BYTE [rdi + rcx], 0		; !s1[i]
			je		end						; egal 0
			cmp		BYTE [rsi + rcx], 0		; !s2[i]
			je		sup
			jmp		comp

end:
			cmp		BYTE [rsi + rcx], 0
			je		same
			jmp		inf						;jump inferieur

sup:
			mov		rax, 1					; ret > 0
			ret

inf:
			mov		rax, -1					; ret < 0
			ret

same:
			mov		rax, 0					; ret == 0
			ret
