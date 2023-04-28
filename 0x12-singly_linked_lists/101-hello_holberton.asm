;Define printf as an external function
extern printf

SECTION .DATA
	msg: db "Hello, Holberton", 0 ;Zero is a null terminator
	fmt: db "%s", 10, 0 ;printf format string follow by a newline(10) and a null terminator(0).

SECTION .TEXT
	global main
main:
	push rbp ;push stack

	;set up parameters and call the c function
	mov rdi,fmt
	mov rsi, msg
	mov rax, 0
	call printf

	pop rbp		;pop stack
	mov rax,0	;Exit code 0
	ret		; Return
