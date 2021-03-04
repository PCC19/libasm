/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testa_ft_strdup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 00:46:47 by user42            #+#    #+#             */
/*   Updated: 2021/03/04 01:49:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "testa.h"

static void	print_o(char *orig)
{
	char *copia;

	copia = "";
	printf("======= ft_strdup  =======\n");
	printf(" antes\n");
	printf("   strdup  orig: |%s|\t\t copia: |%s|\n", orig, copia);
	copia = strdup(orig);
	printf(" depois\n");
	printf("   strdup  orig: |%s|\t\t copia: |%s|\n", orig, copia);
	free(copia);

}

static void	print(char *orig)
{
	char *copia;

	copia = "";
	printf("======= ft_strdup  =======\n");
	printf(" antes\n");
	printf("ft_strdup  orig: |%s|\t\t copia: |%s|\n", orig, copia);
	copia = ft_strdup(orig);
	printf(" depois\n");
	printf("ft_strdup  orig: |%s|\t\t copia: |%s|\n", orig, copia);
	free(copia);
}

void		testa_ft_strdup(void)
{
	printf("EMPTY STRING\n");
	print_o("");
	print("");
	printf("VERY LONG STRING\n");
	print_o("VERY VERY VERY LONG STRING");
	print("VERY VERY VERY LONG STRING");
}
