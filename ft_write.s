global    _ft_write
extern    ___error

_ft_write:                              ; rdi = fd | rsi = buf | rdx = bytes a lire
            mov    rax, 0x2000004       ; appelle de fonction | ret dans rax
            syscall
            jc    _error_write          ; error carry flags | rax = errno
            ret
_error_write:
            mov    rdi, rax             ; tmp pour errno
            push    rdi
            call    ___error            ; recup adress errno
            pop    rdi
            mov    [rax], rdi           ; errno dans pointeur errno (valeur de retour de ___error)
            mov    rax, -1              ; retourner -1 pour erreur
            ret
