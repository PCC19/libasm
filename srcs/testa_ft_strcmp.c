/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testa_ft_strcmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 00:07:44 by user42            #+#    #+#             */
/*   Updated: 2021/03/03 00:54:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "testa.h"

static void	print(char *s1, char *s2)
{
	printf("======= ft_strcmp =======\n");
	printf("   strcmp s1: |%s|\t\t\t s2: |%s| dif: %d\n", s1, s2,
		strcmp(s1, s2));
	printf("ft_strcmp s1: |%s|\t\t\t s2: |%s| dif: %d\n", s1, s2,
		ft_strcmp(s1, s2));
}

void		testa_ft_strcmp(void)
{
	print("abcd", "abcd");
	print("abcd", "abc");
	print("abcd", "a");
	print("abcd", "abcde");
	print("abcd", "abcdef");
	print("abcd", "abcdf");
	print("", "abcdf");
	print("abcd", "");
}
