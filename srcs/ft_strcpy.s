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

global ft_strcpy
ft_strcpy:
	mov	rax,	rdi
.loop:
	cmp	byte[rsi],	0
	je	.sailoop
	mov	rdi,	rsi
	inc	rdi
	inc rsi
	jmp	.loop
.sailoop:
	mov	rdi,	rsi
	ret
