section .data
    hello_message db 'Hello, Holberton', 10, 0 ; Add newline character

section .text
    extern printf
    global main

main:
    ; Preserve caller's frame pointer
    push rbp
    mov rbp, rsp

    ; Load the address of the hello_message into rdi (first argument to printf)
    lea rdi, [rel hello_message]

    ; Set the number of vector registers to 0 (varargs requirement)
    xor rax, rax

    ; Call printf function
    call printf

    ; Restore caller's frame pointer
    mov rsp, rbp
    pop rbp

    ; Return with exit code 0
    xor rax, rax
    ret

