/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testa_ft_write.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:40:01 by user42            #+#    #+#             */
/*   Updated: 2021/03/04 02:18:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "testa.h"

static void	print_o(size_t count, int fd, char *s1)
{
	size_t	n1;

	errno = 0;
	if (fd > 1)
		fd = open("aw", O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	n1 = write(fd, s1, count);
	printf("--------------------------\n");
	printf("   write s1: |%s|\t\t n1: %zu\t\t errno: %d\n", s1, n1, errno);
	if (fd != 1)
		close(fd);
}

static void	print(size_t count, int fd, char *s1)
{
	size_t	n1;

	errno = 0;
	if (fd > 1)
		fd = open("aw", O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	n1 = ft_write(fd, s1, count);
	printf("ft_write s1: |%s|\t\t n1: %zu\t\t errno: %d\n", s1, n1, errno);
	if (fd != 1)
		close(fd);
}

void		testa_ft_write(void)
{
	printf("\nSTDOUT (1)\n");
	print_o(3, 1, "Teste!");
	print(3, 1, "Teste!");
	printf("\nOPEN FILE\n");
	print_o(3, 2, "Teste!");
	print(3, 2, "Teste!");
	printf("\nWrong fd (-1)\n");
	print_o(5, -5, "Teste!");
	print(5, -5, "Teste!");
}
