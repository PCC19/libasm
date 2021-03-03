; **************************************************************************** #
;                                                                              #
;                                                         :::      ::::::::    #
;    ft_read.s                                          :+:      :+:    :+:    #
;                                                     +:+ +:+         +:+      #
;    By: user42 <marvin@42.fr>                      +#+  +:+       +#+         #
;                                                 +#+#+#+#+#+   +#+            #
;    Created: 2021/03/03 22:12:07 by user42            #+#    #+#              #
;    Updated: 2021/03/03 22:12:07 by user42           ###   ########.fr        #
;                                                                              #
; **************************************************************************** #

bits	64

section	.text
	global ft_read
	extern	__errno_location

ft_read:
	mov	rax,	0
	syscall
	cmp	rax,	0
	jl	.erro
	ret
.erro:
	neg		rax
	push	rax
	call	__errno_location
	pop		qword[rax]
	mov		rax,	-1
	ret
