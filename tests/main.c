/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 00:18:44 by user42            #+#    #+#             */
/*   Updated: 2021/03/04 02:09:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include "testa.h"
#include <sys/errno.h>

int	main(void)
{
	printf("=================== ft_strlen ================\n");
	testa_ft_strlen();
	printf("\n");
	printf("=================== ft_strcpy ================\n");
	testa_ft_strcpy();
	printf("\n");
	printf("=================== ft_strcmp ================\n");
	testa_ft_strcmp();
	printf("\n");
	printf("=================== ft_read ================\n");
	testa_ft_read();
	printf("\n");
	printf("=================== ft_write ================\n");
	testa_ft_write();
	printf("\n");
	printf("=================== ft_strdup ================\n");
	testa_ft_strdup();
	return (0);
}
