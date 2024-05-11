/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:22:38 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/12 22:01:37 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*src_start = src;

	if (size > 0)
	{
		while (--size > 0 && *src)
			*dst++ = *src++;
		*dst = '\0';
	}
	while (*src)
		src++;
	return (src - src_start);
}
/* 
#include <bsd/string.h>

void	test1(void)
{
	char	tab[] = "test";
	char	tab1[] = "test";

	printf("%ld should be egual to %ld\n", ft_strlcpy(tab, "bon", 2),
		strlcpy(tab1, "bon", 2));
	printf("%s should be equal to %s\n", tab, tab1);
}

void	test2(void)
{
	char	tab[] = "test";
	char	tab1[] = "test";

	printf("%ld should be egual to %ld\n", ft_strlcpy(tab, "bonnnnnnnnn", 2),
		strlcpy(tab1, "bonnnnnnnnn", 2));
	printf("%s should be equal to %s\n", tab, tab1);
}

void	test3(void)
{
	char	tab[] = "test";
	char	tab1[] = "test";

	printf("%ld should be egual to %ld\n", ft_strlcpy(tab, "bon", 5),
		strlcpy(tab1, "bon", 5));
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