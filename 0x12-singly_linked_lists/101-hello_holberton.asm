section .data
    hello db "Hello, Holberton", 10, 0  ; The string to print with a newline character

section .text
    global main
    extern printf

main:
    push rbp        ; Create a stack frame
    mov rdi, hello  ; Load the address of the string into rdi (1st argument for printf)
    call printf     ; Call the printf function
    add rsp, 8      ; Adjust the stack pointer to remove arguments
    pop rbp         ; Restore the stack frame
    ret             ; Return from the main function

