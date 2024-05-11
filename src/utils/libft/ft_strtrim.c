/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:40:11 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/11 07:26:34 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_is_in_set(char const *set, char c)
{
	size_t	i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (1);
	return (0);
}

static int	can_add_the_char(char const *s1, char const *set, size_t i)
{
	if (!char_is_in_set(set, s1[i]))
		return (1);
	while (s1[i] && char_is_in_set(set, s1[i]))
		i++;
	return (s1[i]);
}

static int	get_alloc_size(char const *s1, char const *set)
{
	size_t	i;
	size_t	minus;

	i = 0;
	while (s1[i] && char_is_in_set(set, s1[i]))
		i++;
	minus = i;
	while (s1[i] && can_add_the_char(s1, set, i))
		i++;
	return (i - minus);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	i_result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	result = (char *)malloc((get_alloc_size(s1, set) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && char_is_in_set(set, s1[i]))
		i++;
	i_result = 0;
	while (s1[i] && can_add_the_char(s1, set, i))
	{
		result[i_result] = s1[i];
		i++;
		i_result++;
	}
	result[i_result] = '\0';
	return (result);
}

/*
int	main(void)
{
	printf("%s should be equal to %s\n", ft_strtrim("sad", "man"), "sad");
	printf("%s should be equal to %s\n", ft_strtrim("toto", "o"), "tot");
	printf("%s should be equal to %s\n", ft_strtrim("123", "pokemon"), "123");
	printf("%s should be equal to %s\n",
		ft_strtrim("1111       5555    11111    ", " 1"), "5555");
	return (0);
}
 */
