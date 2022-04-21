<<<<<<< HEAD
message db "Hello, Holberton",10
section .text
global main
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, 17
	syscall
=======
	message db "Hello, Holberton",10

section .text

global main

main:

	mov rax, 1

	mov rdi, 1

	mov rsi, message

	mov rdx, 17

	syscall

>>>>>>> 5501e1536b95f8a880b7d69b4fea394cbc8b4d96
