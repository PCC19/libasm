; **************************************************************************** #
;                                                                              #
;                                                         :::      ::::::::    #
;    ft_strlen.s                                        :+:      :+:    :+:    #
;                                                     +:+ +:+         +:+      #
;    By: user42 <marvin@42.fr>                      +#+  +:+       +#+         #
;                                                 +#+#+#+#+#+   +#+            #
;    Created: 2021/03/02 19:18:00 by user42            #+#    #+#              #
;    Updated: 2021/03/02 19:18:00 by user42           ###   ########.fr        #
;                                                                              #
; **************************************************************************** #

bits	64

global ft_strlen
ft_strlen:
	xor	rcx,	rcx
.loop:
	cmp	byte[rdi],	0
	je	.sailoop
	inc	rcx
	inc	rdi
	jmp	.loop
.sailoop:
	mov	rax,	rcx
	ret
