/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:40:38 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/12 23:13:47 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	length_little;
	size_t	jumper;

	length_little = ft_strlen(little);
	i = -1;
	if (*little == '\0')
		return ((char *)big);
	while (len != 0 && big[++i] && i <= len - length_little)
	{
		j = 0;
		jumper = 0;
		while (big[i + j] == little[j])
		{
			if (little[++j] == '\0')
				return ((char *)big + i);
			if (jumper == 0 && big[i + j] == little[0])
				jumper = j;
		}
		if (jumper)
			i += jumper - 1;
	}
	return (0);
}
/* 
#include <bsd/string.h>

int	main(void)
{
	char	*big;
	char	*little;
	size_t	max;
	char	haystack[30] = "aaabcabcd";
	char	needle[10] = "aabc";

	printf("%s should be egual to %s\n", ft_strnstr(haystack, needle, -1),
		strnstr(haystack, needle, -1));
	printf("%s should be egual to %s\n", ft_strnstr("sad", "sad", 5),
		strnstr("sad", "sad", 5));
	printf("%s should be egual to %s\n", ft_strnstr("dsa", "sa", 2),
		strnstr("dsa", "sa", 2));
	printf("%s should be egual to %s\n", ft_strnstr("", "sad", 6), strnstr("",
			"sad", 6));
	printf("%s should be egual to %s\n", ft_strnstr("zzz", "sad", 6),
		strnstr("zzz", "sad", 6));
	printf("%s should be egual to %s\n",
		ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0),
		strnstr("lorem ipsum dolor sit amet", "dolor", 0));
	big = "abcdef";
	little = "abcdefghijklmnop";
	max = strlen(big);
	printf("%s should be egual to %s\n", ft_strnstr(big, little, max),
		strnstr(big, little, max));
	printf("%s should be egual to %s\n", ft_strnstr(big, big, max), strnstr(big,
			big, max));
	return (0);
}
 */