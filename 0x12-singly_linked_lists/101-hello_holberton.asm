section .data
    hello_message db "Hello, Holberton",0
    format db "%s",10,0

section .text
    global main
    extern printf

main:
    sub rsp, 8            ; Align the stack (16-byte alignment)
    mov rdi, format       ; Load the format string address
    mov rsi, hello_message ; Load the message address
    call printf           ; Call the printf function

    add rsp, 8            ; Restore the stack

    ; Exit the program
    mov rax, 60           ; syscall number for exit
    xor rdi, rdi          ; exit status: 0
    syscall

