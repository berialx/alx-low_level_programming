section .data
	fmt db "%s, 10, 0
	msg db "Hello world!", 0	; 10 is the ASCII code for a new line (LF)

	section .text
	extern printf
	global main

main:
	push	rbp
	mov	rsi, msg
	mov	rdi, fmt
	mov	rax, 0
	call	printf
	pop	rbp
	mov	rax, 0
	ret
