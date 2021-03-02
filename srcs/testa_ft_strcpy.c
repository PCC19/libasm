/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testa_ft_strcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:37:44 by user42            #+#    #+#             */
/*   Updated: 2021/03/02 22:00:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "testa.h"

void	print(char *s)
{
		char *d;
		
		d = (char*)malloc(sizeof(char*) * strlen(s) + 2);
		d[0] = 'x';
		d[1] = 0;

		printf("======= ft_strcpy =======\n");
		printf("          source: |%s|\t\t\t dest: |%s|\n", s, d);
		//printf("   strcpy\n");
		printf("   strcpy source: |%s|\t\t\t dest: |%s|\n", s, strcpy(d, s));
		//printf("ft_strcpy\n");
		printf("ft_strcpy source: |%s|\t\t\t dest: |%s|\n", s, strcpy(d, s));
		free(d);
}

void	testa_ft_strcpy(void)
{
	print("Paulo");
	print("Cunha");
	print("");
	print("123");
}