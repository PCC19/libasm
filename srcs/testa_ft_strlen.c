/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testa_ft_strlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 20:37:59 by user42            #+#    #+#             */
/*   Updated: 2021/03/03 00:55:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "testa.h"

static void	print(char *s)
{
	printf("======= ft_strlen =======\n");
	printf("string: |%s|\n", s);
	printf("   strlen:\t\t%zu\n", strlen(s));
	printf("ft_strlen:\t\t%zu\n", ft_strlen(s));
}

void		testa_ft_strlen(void)
{
	print("Paulo");
	print("Roberto");
	print("");
	print("Paulo \t \n Cunha");
}
