section .text
; Export the entry point to the ELF linker or loader.  The conventional
; entry point is "_start". Use "ld -e foo" to override the default.
	global_start:

section .data

	msg db "Hello World!",0xa;
	len equ $-msg;
section.text:

; linker puts the entry point here:
_start:

; Write the string to stdout:
	
	mov edx,len;message len
	mov ecx,msg;message to write
	mov ebx,1;sys call (sys write)
	mov eax,4;to call sys write
	int 0x80;call kernel

	mov ebx,0;process exit code
	mov eax, 1;sys call (sys_exit)
	int 0x080;this interrupt won't return

