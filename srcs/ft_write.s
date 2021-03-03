# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_write.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/04 00:36:12 by user42            #+#    #+#              #
#    Updated: 2021/03/04 00:36:56 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

bits	64

section	.text
	global ft_write
	extern	__errno_location

ft_write:
	mov	rax,	1
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
