# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcmp.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/03 00:04:35 by user42            #+#    #+#              #
#    Updated: 2021/03/03 00:47:36 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
; s1:rdi s2:rsi
bits	64

global ft_strcmp
ft_strcmp:
	mov	rax,	0
	mov rcx,	0
.loop:
	cmp	byte[rdi],	0
	je	.s1
	cmp	byte[rsi],	0
	je	.s2
	inc	rdi
	inc rsi
	jmp	.loop
.s1:
	cmp byte[rsi],	0
	je	.end
	sub rax,	1
	ret
.s2:
	cmp	byte[rdi],	0
	je	.end
	add rax,	1
	ret
.end:
	ret
