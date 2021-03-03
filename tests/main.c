/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:13:51 by user42            #+#    #+#             */
/*   Updated: 2021/03/03 23:53:54 by user42           ###   ########.fr       */
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
//	testa_ft_write();
	return (0);
}
