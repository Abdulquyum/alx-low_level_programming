extern printf

section .data
	msg: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0

	section .text
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0

	ret
