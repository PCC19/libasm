; **************************************************************************** #
;                                                                              #
;                                                         :::      ::::::::    #
;    ft_strcpy.s                                        :+:      :+:    :+:    #
;                                                     +:+ +:+         +:+      #
;    By: user42 <marvin@42.fr>                      +#+  +:+       +#+         #
;                                                 +#+#+#+#+#+   +#+            #
;    Created: 2021/03/02 22:03:34 by user42            #+#    #+#              #
;    Updated: 2021/03/02 22:03:34 by user42           ###   ########.fr        #
;                                                                              #
; **************************************************************************** #

bits	64

section .text
	global ft_strcpy

ft_strcpy:
	mov	rax,	rdi
	xor	rcx,	rcx
.loop:
	cmp	byte[rsi + rcx],	0
	je	.sailoop
	mov	dl,	[rsi + rcx]
	mov	[rax + rcx],	dl
	inc	rcx
	jmp	.loop
.sailoop:
	mov byte[rax + rcx],	0
	ret
