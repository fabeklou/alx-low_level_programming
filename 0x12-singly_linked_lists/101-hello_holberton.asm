bits    64
default rel

global  main

extern  printf

section .data
    format      db 'Hello, Holberton', 0xA, 0

section .bss

section .text
    main:
        sub     rsp, 8

        lea     rdi, [format]
        mov     al, 0
        call    printf wrt ..plt

        add     rsp, 8
        sub     rax, rax
        ret
