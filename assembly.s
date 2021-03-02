bits 64

global assembly
assembly:
	mov	rax,	60
	mov	rdi,	0
	syscall
	ret

	;mov rax, 0x1234567890abcdef
	;mov ax,	0xaabb
	;ret
	;mov	rbx,	5
	;mov	rcx,	10
	;lea	eax,	[rcx + rbx*2 + 5]
	;mov	eax,	0
	;mov rbx,	1
	;mov rcx,	5
	;cmp	rbx,	rcx
	;jle	.end

	;mov	eax,	1

;.end:
;	ret
