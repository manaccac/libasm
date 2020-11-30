global    _ft_read
extern    ___error

_ft_read:                              ; rdi = fd | rsi = buf | rdx = bytes a ecrire
            mov    rax, 0x2000003       ; appelle de fonction | ret dans rax
            syscall
            jc    _error_read          ; error carry flags | rax = errno
            ret
_error_read:
            mov    rdi, rax             ; tmp pour errno
            push    rdi
            call    ___error            ; recup adress errno
            pop    rdi
            mov    [rax], rdi           ; errno dans pointeur errno (valeur de retour de ___error)
            mov    rax, -1              ; retourner -1 pour erreur
            ret
