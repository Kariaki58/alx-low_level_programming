section .data
	message db 'Hello, Holberto', 0
	format db '%s', 0

section .text
	global main
	extern printf
main:
	push message
	push format
	call printf
	add rsp, 16

	ret
