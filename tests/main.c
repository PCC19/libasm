/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 00:18:44 by user42            #+#    #+#             */
/*   Updated: 2021/03/04 00:54:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include "testa.h"
#include <sys/errno.h>

int	main(void)
{
	printf("teste %d\n", teste());
	testa_ft_strlen();
	printf("\n");
	testa_ft_strcpy();
	printf("\n");
	testa_ft_strcmp();
	printf("\n");
	testa_ft_read();
	printf("\n");
	testa_ft_write();
	printf("\n");
	testa_ft_strdup();
	return (0);
}
