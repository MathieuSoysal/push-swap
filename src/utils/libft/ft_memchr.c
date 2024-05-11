/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:44:10 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/12 22:21:56 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- > 0)
		if (*((unsigned char *)s++) == (unsigned char)c)
			return (((unsigned char *)s - 1));
	return (0);
}
/*
#include "libft.h"
#include <ctype.h>
#include <string.h>

int	main(void)
{
	char	s[] = {0, 1, 2, 3, 4, 5};

	printf("%p should be egual to %p\n", ft_memchr("sad", 'a', 3), memchr("sad",
			'a', 3));
	printf("%p should be egual to %p\n", ft_memchr("sad", 'z', 3), memchr("sad",
			'z', 3));
	printf("%p should be egual to %p\n", ft_memchr("", 'z', 0), memchr("", 'z',
			0));
	printf("%p should be egual to %p\n", ft_memchr(s, 2 + 256, 3), memchr(s, 2
			+ 256, 3));
	return (0);
}
 */