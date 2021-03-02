/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testa_ft_strlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 20:37:59 by user42            #+#    #+#             */
/*   Updated: 2021/03/02 21:15:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "testa.h"

void	testa_ft_strlen(void)
{
	char	s[][50] = {"Paulo",
					"Roberto",
					"",
					"Paulo \t \n Cunha"};
	int		i;
	int		max;

	max = 4;
	i = 0;
	while (i < max)
	{
		printf("======= ft_strlen =======\n");
		printf("string: |%s|\n", s[i]);
		printf("   strlen:\t\t%zu\n", strlen(s[i]));
		printf("ft_strlen:\t\t%zu\n", ft_strlen(s[i]));
		i++;
	}
}
