extern printf

section .data
greet: db "Hello, Holberton", 0
fmt: db "%s", 10, 0

section .text
global main 

main:
push rbp

mov rdi, fmt
mov rsi, greet
mov rax, 0
mov rax, 0
call printf
pop rbp

ret
