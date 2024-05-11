/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:23:06 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/11 05:51:06 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (dst == NULL && size == 0)
		return (size);
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	i = ft_strlen(dst);
	j = -1;
	while (src[++j] && i + j < size - 1)
		dst[i + j] = src[j];
	dst[i + j] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}
/*
#include <bsd/string.h>
#include <stdlib.h>

void	test1(void)
{
	char	*tab;
	char	*tab1;

	tab = malloc(20);
	tab1 = malloc(20);
	tab1[0] = 't';
	tab1[1] = 'e';
	tab1[2] = '\0';
	tab[0] = 't';
	tab[1] = 'e';
	tab[2] = '\0';
	printf("%ld should be egual to %ld\n", ft_strlcat(tab, "bon", 2),
		strlcat(tab1, "bon", 2));
	printf("%s should be equal to %s\n", tab, tab1);
}

void	test2(void)
{
	char	*tab;
	char	*tab1;

	tab = malloc(20);
	tab1 = malloc(20);
	tab1[0] = 't';
	tab1[1] = 'e';
	tab1[2] = '\0';
	tab[0] = 't';
	tab[1] = 'e';
	tab[2] = '\0';
	printf("%ld should be egual to %ld\n", ft_strlcat(tab, "bonnnnnnnnn", 0),
		strlcat(tab1, "bonnnnnnnnn", 0));
	printf("%s should be equal to %s\n", tab, tab1);
}

void	test3(void)
{
	char	*tab;
	char	*tab1;

	tab = malloc(20);
	tab1 = malloc(20);
	tab1[0] = 't';
	tab1[1] = 'e';
	tab1[2] = '\0';
	tab[0] = 't';
	tab[1] = 'e';
	tab[2] = '\0';
	printf("%ld should be egual to %ld\n", ft_strlcat(tab, "bon", 3),
		strlcat(tab1, "bon", 3));
	printf("%s should be equal to %s\n", tab, tab1);
}

int	main(void)
{
	test1();
	test2();
	test3();
	return (0);
}
 */