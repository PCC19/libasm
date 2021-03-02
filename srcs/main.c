/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:13:51 by user42            #+#    #+#             */
/*   Updated: 2021/03/03 00:16:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include "testa.h"

int	main(void)
{
	printf("teste %d\n", teste());
	testa_ft_strlen();
	printf("\n");
	testa_ft_strcpy();
	printf("\n");
	testa_ft_strcmp();

	return (0);
}
