/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:14:50 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/12 15:45:46 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*malloc_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (ft_strlen(s) - start > len)
		result = (char *)malloc((len + 1) * sizeof(char));
	else
		result = (char *)malloc((ft_strlen(s) - start + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	return (result);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return ((char *)ft_calloc(1, sizeof(char)));
	result = malloc_substr(s, start, len);
	if (result == NULL)
		return (NULL);
	i = -1;
	while (++i < len && start + i < ft_strlen(s))
		result[i] = s[start + i];
	result[i] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";
	size_t	size;

	size = 10;
	printf("%s should be equal to %s\n", ft_substr("sad", 0, 5), "sad");
	printf("%s should be equal to %s\n", ft_substr("dsdsaf", 0, 2), "ds");
	printf("%s should be equal to %s\n", ft_substr("", 0, 6), "");
	printf("%s should be equal to %s\n", ft_substr("zsz", 1, 2), "sz");
	printf("%s should be equal to %s\n", ft_substr(str, 0, 10), "lorem ipsu");
	printf("%s should be equal to %s\n", ft_substr("tripouille", 1, 1), "r");
	printf("%s should be equal to %s\n", ft_substr("01234", 10, size), "");
	printf("compare : %d\n", ft_strncmp(ft_substr("01234", 10, size), "", 1));
	return (0);
}
 */