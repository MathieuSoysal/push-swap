/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:44:29 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/12 21:21:25 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
		if ((unsigned char)*s++ == (unsigned char)c)
			return ((char *)s - 1);
	if ((unsigned char)(*s) == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
/*
#include "libft.h"
#include <ctype.h>
#include <string.h>

int	main(void)
{
	printf("%s should be egual to %s\n", ft_strchr("sad", 'a'), strchr("sad",
			'a'));
	printf("%s should be egual to %s\n", ft_strchr("sade", 'z'), strchr("sade",
			'z'));
	printf("%s should be egual to %s\n", ft_strchr("", 'z'), strchr("", 'z'));
	printf("%s should be egual to %s\n", ft_strchr("sad", 's'), strchr("sad",
			's'));
	printf("%s should be egual to %s\n", ft_strchr("bonjour", 'o'),
		strchr("bonjour", 'o'));
	printf("%s should be egual to %s\n", ft_strchr("bonjour", '\0'),
		strchr("bonjour", '\0'));
	printf("%s should be egual to %s\n", ft_strchr("tripouille", 't' + 256),
		strchr("tripouille", 't' + 256));
	return (0);
}
 */