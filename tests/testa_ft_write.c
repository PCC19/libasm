/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testa_ft_write.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:40:01 by user42            #+#    #+#             */
/*   Updated: 2021/03/03 22:51:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "testa.h"

static void	print_o(size_t count, int fd, char *s1)
{
	size_t	n1;

	if (fd > 1)
		fd = open("aw", O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	n1 = write(fd, s1, count);
	printf("======= ft_write  =======\n");
	printf("   write s1: |%s|\t\t n1: %zu\t\t errno: %d\n", s1, n1, errno);
	if (fd != 0)
		close(fd);
}

static void	print(size_t count, int fd, char *s1)
{
	size_t	n1;

	if (fd > 1)
		fd = open("aw", O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	n1 = write(fd, s1, count);
	printf("ft_read s1: |%s|\t\t n1: %zu\t\t errno: %d\n", s1, n1, errno);
	if (fd != 0)
		close(fd);
}

void		testa_ft_write(void)
{
	printf("STDOUT (1)\n");
	print_o(0, 1, "Teste!");
	print(0, 1, "Teste!");
	printf("OPEN FILE\n");
	print_o(1, 1, "Teste!");
	print(1, 1, "Teste!");
	printf("Wrong fd (-1)\n");
	print_o(10, -5, "Teste!");
	print(10, -5, "Teste!");
}

