

push rbp ;

mov rdi, fmtstr ;
mov al, 0;

extern printf
call printf

pop rbp
ret

fmtstr:
	db `Hello, Holberton\n`,0
