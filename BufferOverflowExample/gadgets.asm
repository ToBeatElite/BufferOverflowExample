; tobeatelite.ca

PUBLIC gadgets

.code

gadgets PROC
     
    pop rax 
    ret
    
    pop rbx
    ret

    pop rcx
    ret

    pop rdx
    ret

    mov rax, rbx
    ret

    cmp rcx, rbx
    ret

    cmove rax, rcx
    ret

    xchg rax, rbx
    ret

    or rax, rbx
    ret

    xor rax, rbx
    ret

    mul rbx
    ret

    xadd rbx, rax 
    ret

    cmpxchg rbx, rcx
    ret

    div rbx
    ret

gadgets ENDP

END