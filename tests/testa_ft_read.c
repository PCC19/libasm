/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testa_ft_read.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 15:16:17 by user42            #+#    #+#             */
/*   Updated: 2021/03/03 22:38:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "testa.h"

static void	print_o(size_t count, int fd)
{
	char	*s1;
	size_t	n1;

	if (fd > 0)
	{
		if ((fd = open("ar", O_RDONLY)) < 0)
			exit(1);
	}
	s1 = (char*)malloc(sizeof(char) * 50);
	bzero(s1, 50);
	n1 = read(fd, s1, count);
	printf("======= ft_read =======\n");
	printf("   read s1: |%s|\t\t n1: %zu\t\t errno: %d\n", s1, n1, errno);
	if (fd != 0)
		close(fd);
	free(s1);
}

static void	print(size_t count, int fd)
{
	char	*s1;
	size_t	n1;

	if (fd > 0)
	{
		if ((fd = open("ar", O_RDONLY)) < 0)
			exit(1);
	}
	s1 = (char*)malloc(sizeof(char) * 50);
	bzero(s1, 50);
	n1 = ft_read(fd, s1, count);
	printf("ft_read s1: |%s|\t\t n1: %zu\t\t errno: %d\n", s1, n1, errno);
	close(fd);
	free(s1);
}

void		testa_ft_read(void)
{
	printf("OK files\n");
	print_o(0, 1);
	print(0, 1);
	print_o(1, 1);
	print(1, 1);
	print_o(5, 1);
	print(5, 1);
	print_o(100, 1);
	print(100, 1);
	printf("Wrong fd (-1)\n");
	print_o(10, -5);
	print(10, -5);
	printf("STDIN (0)\n");
	print_o(10, 0);
	print(10, 0);
}
