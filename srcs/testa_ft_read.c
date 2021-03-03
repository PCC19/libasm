/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testa_ft_read.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 15:16:17 by user42            #+#    #+#             */
/*   Updated: 2021/03/03 16:08:34 by user42           ###   ########.fr       */
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
	s1 = (char*)malloc(sizeof(char)*50);
	bzero(s1,50);
	n1 = read(fd, s1, count);
	printf("======= ft_read =======\n");
	printf("   read s1: |%s|\t\t n1: %zu\t\t errno: %d\n", s1, n1, errno);
	close(fd);
	free(s1);
}

static void	print(size_t count, int fd)
{
	char	*s1;
	size_t	n1;

	print_o(count, fd);
	if (fd > 0 )
	{
		if ((fd = open("ar", O_RDONLY)) < 0)
			exit(1);
	}
	s1 = (char*)malloc(sizeof(char)*50);
	bzero(s1,50);
	n1 = read(fd, s1, count);
	printf("ft_read s1: |%s|\t\t n1: %zu\t\t errno: %d\n", s1, n1, errno);
	close(fd);
	free(s1);
	//printf("%s\n,",strerror(errno));
}

void		testa_ft_read(void)
{
	print(0, 1);
	print(1, 1);
	print(3, 1);
	print(5, 1);
	print(10, 1);
	print(100, 1);
	print(10, -5);
}
