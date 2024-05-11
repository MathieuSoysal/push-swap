/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:20:24 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/11 06:34:38 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	result = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (result == NULL)
		return (result);
	j = -1;
	while (s1[++j])
		result[j] = s1[j];
	i = j;
	j = -1;
	while (s2[++j])
		result[i + j] = s2[j];
	result[i + j] = '\0';
	return (result);
}

/*
int	main(void)
{
	printf("%s should be equal to %s\n", ft_strjoin("sad", "man"), "sadman");
	printf("%s should be equal to %s\n", ft_strjoin("toto", ""), "toto");
	printf("%s should be equal to %s\n", ft_strjoin("", ""), "");
	printf("%s should be equal to %s\n", ft_strjoin("", "s"), "s");
	return (0);
}
 */
