/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:58:27 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/12 21:24:55 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = NULL;
	while (*s)
		if (((unsigned char)*s++) == (unsigned char)c)
			res = ((char *)s - 1);
	if ((unsigned char)(*s) == (unsigned char)c)
		return ((char *)s);
	return (res);
}
/*
#include "libft.h"
#include <ctype.h>
#include <string.h>

int	main(void)
{
	printf("%s should be egual to %s\n", ft_strrchr("sad", 'a'), strrchr("sad",
			'a'));
	printf("%s should be egual to %s\n", ft_strrchr("sad", 'z'), strrchr("sad",
			'z'));
	printf("%s should be egual to %s\n", ft_strrchr("sada", 'a'),
		strrchr("sada", 'a'));
	printf("%s should be egual to %s\n", ft_strrchr("", 'z'), strrchr("", 'z'));
	printf("%s should be egual to %s\n", ft_strrchr("zzz", 'z'), strrchr("zzz",
			'z'));
	printf("%s should be egual to %s\n", ft_strchr("tripouille", 't' + 256),
		strchr("tripouille", 't' + 256));
	return (0);
}
 */