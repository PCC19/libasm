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

extern	__ernno_location
global ft_read

section	.text
ft_read:
	mov	rax,	0
	syscall
	cmp	rax,	0
	jl	.error
	ret
.error:
	neg	rax
	mov	rdi,	rax
	call	__ernno_location
	mov	[rax],	rdi
	mov	rax,	-1
	ret

