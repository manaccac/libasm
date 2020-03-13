section .text
	global _ft_strcmp

_ft_strcmp:
				xor		rcx, rcx
				xor		rdx, rdx
				cmp		rdi, 0				; s1 exist
				jz		null
				cmp		rsi, 0				; s2 exist
				jz		null
				jmp		check

null:
				cmp		rdi, rsi
				jz		same				; s1 == s2 (NULL)
				jg		sup					; s1 == NULL
				jmp		inf					; s2 == NULL

comp:
			mov		dl, BYTE [rsi + rcx]	; tmp = s2[i]
			cmp		BYTE [rdi + rcx], dl	; s1[i] == tmp
			jne		end						; pas egal 0

check:
			cmp		BYTE [rdi + rcx], 0		; !s1[i]
			je		end						; egal 0
			cmp		BYTE [rsi + rcx], 0		; !s2[i]
			je		end
			jmp		comp

end:
			mov		dl, BYTE [rdi + rcx]	; cmp = s1[i]
			sub		dl, BYTE [rsi + rcx]	; cmp -= s2[i]
			cmp		dl, 0					; cmp == 0
			jz		same
			jl		inf						;jump inferieur

sup:
			mov		rax, 1					; ret > 0
			ret

inf:
			mov		rax, -1					; ret < 0
			ret

same:
			mov		rax, 0					; ret == 0
			ret
