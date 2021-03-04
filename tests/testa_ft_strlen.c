/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testa_ft_strlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 20:37:59 by user42            #+#    #+#             */
/*   Updated: 2021/03/04 02:12:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "testa.h"

static void	print(char *s)
{
	printf("--------------------------\n");
	printf("string: |%s|\n", s);
	printf("   strlen:\t\t%zu\n", strlen(s));
	printf("ft_strlen:\t\t%zu\n", ft_strlen(s));
}

void		testa_ft_strlen(void)
{
	print("Paulo");
	print("Rob\0erto");
	print("");
	print("Paulo \t \n Cunha");
	print("Very long long long long long long long long long long string");
}
