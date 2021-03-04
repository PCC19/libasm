; **************************************************************************** #
;                                                                              #
;                                                         :::      ::::::::    #
;    ft_strdup.s                                        :+:      :+:    :+:    #
;                                                     +:+ +:+         +:+      #
;    By: user42 <marvin@42.fr>                      +#+  +:+       +#+         #
;                                                 +#+#+#+#+#+   +#+            #
;    Created: 2021/03/04 01:31:42 by user42            #+#    #+#              #
;    Updated: 2021/03/04 01:31:42 by user42           ###   ########.fr        #
;                                                                              #
; **************************************************************************** #

bits	64

section	.text
	global	ft_strdup
	extern	malloc
	extern	ft_strlen
	extern	strcpy
	extern	__errno_location

ft_strdup:
	push	rdi
	call	ft_strlen
	add		rax,	1
	mov		rdi,	rax
	call	malloc
	cmp		rax,	0
	je		.erro
	pop		r9
	mov		rdi,	rax
	mov		rsi,	r9
	call	strcpy
	ret
.erro:
	neg		rax
	push	rax
	call	__errno_location
	pop		qword[rax]
	mov		rax,	-1
	ret
