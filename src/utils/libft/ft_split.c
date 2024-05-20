/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:42:30 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/20 07:53:29 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*free_split(char **splitted, size_t size)
{
	while (size)
	{
		--size;
		free(splitted[size]);
	}
	free(splitted);
	return (NULL);
}

static int	get_size_of_splited_element(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	**create_array_of_string(int size)
{
	char	**result;

	result = ((char **)malloc((size + 1) * sizeof(char *)));
	if (result != NULL)
		result[size] = NULL;
	return (result);
}

static char	**ft_split_recursiv(char *str, char c, int size)
{
	char	**result;
	int		length;
	char	*splitted;

	if (!*str)
		return (create_array_of_string(size));
	if (*str != c)
	{
		length = get_size_of_splited_element(str, c);
		result = ft_split_recursiv(str + length, c, size + 1);
		if (result == NULL)
			return (NULL);
		splitted = ft_substr(str, 0, length);
		if (splitted == NULL)
			return (free_split(result, size));
		result[size] = splitted;
		return (result);
	}
	while (*str && *str == c)
		str++;
	return (ft_split_recursiv(str, c, size));
}

char	**ft_split(const char *str, char c)
{
	if (str == NULL)
		return (NULL);
	return (ft_split_recursiv((char *)str, c, 0));
}
/*
int	main(void)
{
	char	**result;

	result = ft_split("sad", 'a');
	printf("%s should be equal to %s\n", result[0], "s");
	printf("%s should be equal to %s\n", result[1], "d");
	printf("%s should be equal to %s\n", result[2], NULL);
	return (0);
}
 */