section .text
	global _start
_start:
	mov edx, len
	mov ecx, msg
	mov ebx, 1	;sys call (sys write)
	mov eax, 4	;to call kernel
	int 0x80

	mov eax, 1	;sys call (sys_exit)
	int 0x080

section .data
	msg db "Hello World!",0xa
	len equ $ -msg
