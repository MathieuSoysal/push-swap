/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:02:20 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/12 22:16:25 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strdup_recur(const char *s, size_t *size)
{
	char	*result;

	if (s[*size] == '\0')
	{
		result = (char *)malloc(((*size) + 1) * sizeof(char));
		if (result == NULL)
			return (NULL);
		result[(*size)] = '\0';
		return (result);
	}
	++(*size);
	result = ft_strdup_recur(s, size);
	if (result == NULL)
		return (NULL);
	--(*size);
	result[*size] = s[*size];
	return (result);
}

char	*ft_strdup(const char *s)
{
	size_t	size;

	size = 0;
	return (ft_strdup_recur(s, &size));
}
/*
#include <stdlib.h>
#include <string.h>

void	test1(void)
{
	char	*mine;
	char	*expected;

	mine = ft_strdup("bon");
	expected = strdup("bon");
	printf("%s should be equal to %s\n", mine, expected);
	mine[0] = 's';
	expected[0] = 's';
	printf("%s should be equal to %s\n", mine, expected);
}

int	main(void)
{
	test1();
	return (0);
}
 */