SECTION .data
msg:	db "HELLO, Holberton", 0
fmt: 	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	move eax, 0
	ret
