/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:05:44 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/12 21:19:57 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- > 0)
		if (*((unsigned char *)s1++) != *((unsigned char *)s2++))
			return (*((unsigned char *)s1 - 1) - *((unsigned char *)s2 - 1));
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6};
	int	tab1[] = {1, 2, 3, 4, 5, 6};

	printf("%d should be %d\n", ft_memcmp(tab, tab1, 5), memcmp(tab, tab1, 5));
	printf("%d should be %d\n", ft_memcmp("sad", "sad", 5), memcmp("sad", "sad",
			5));
	printf("%d should be %d\n", ft_memcmp("ssd", "sad", 5), memcmp("ssd", "sad",
			5));
	return (0);
} */
