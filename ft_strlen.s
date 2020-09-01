			section .text		;directive
			global	_ft_strlen	;point de depart

_ft_strlen:
			mov		rax, 0		;i = 0
			jmp		comp			;saut inconditionnel à l’adresse donner

comp:
			cmp		BYTE [rdi + rax], 0	 ;rdi pointeur debut de zone + la dist rax	en gros on compare les bite et on regarde si str[i] == 0
			je		exit			;JE adr : saut à l’adresse adr si la dernière comparaison a donné une égalité
			inc		rax				;i++
			jmp		comp

exit:
			ret						;return(rax)
