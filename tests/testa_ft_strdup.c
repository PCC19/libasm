/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testa_ft_strdup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 00:46:47 by user42            #+#    #+#             */
/*   Updated: 2021/03/04 02:19:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "testa.h"

static void	print_o(char *orig)
{
	char *copia;

	errno = 0;
	copia = "";
	printf("--------------------------\n");
	printf(" antes\n");
	printf("   strdup  orig: |%s|\t\t copia: |%s|\t errno: %d\n",
			orig, copia, errno);
	copia = strdup(orig);
	printf(" depois\n");
	printf("   strdup  orig: |%s|\t\t copia: |%s|\t errno: %d\n",
			orig, copia, errno);
	free(copia);
}

static void	print(char *orig)
{
	char *copia;

	errno = 0;
	copia = "";
	printf("--------------------------\n");
	printf(" antes\n");
	printf("ft_strdup  orig: |%s|\t\t copia: |%s|\t errno: %d\n",
			orig, copia, errno);
	copia = ft_strdup(orig);
	printf(" depois\n");
	printf("ft_strdup  orig: |%s|\t\t copia: |%s|\t errno: %d\n",
			orig, copia, errno);
	free(copia);
}

void		testa_ft_strdup(void)
{
	printf("\nEMPTY STRING\n");
	print_o("");
	print("");
	printf("\nVERY LONG STRING\n");
	print_o("VERY VERY VERY LONG STRING");
	print("VERY VERY VERY LONG STRING");
}
