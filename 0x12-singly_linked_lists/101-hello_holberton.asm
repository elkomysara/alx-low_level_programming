section .data
    hello_msg db 'Hello, Holberton', 0x0A, 0  ; Define the message with a newline

section .text
    extern printf             ; Declare printf as an external symbol
    global main               ; Use main as the entry point

main:
    ; Set up the call to printf
    mov rdi, hello_msg        ; First argument: pointer to the message
    xor rax, rax              ; Clear rax (no floating-point arguments)
    call printf               ; Call printf

    ; Exit the program
    mov rax, 60               ; syscall: exit
    xor rdi, rdi              ; status: 0
    syscall                   ; invoke syscall
