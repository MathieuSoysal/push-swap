/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:42:30 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/21 09:54:36 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (!ft_strcontains(charset, str[i]))
		{
			count++;
			while (str[i] && !ft_strcontains(charset, str[i]))
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	get_word_length(const char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_strcontains(charset, str[i]))
		i++;
	return (i);
}

void	ft_free_split(char **split)
{
	int	i;

	if (split == NULL)
		return ;
	i = -1;
	while (split[++i])
		free(split[i]);
	free(split);
}

char	**ft_split(const char *str, char c)
{
	char	**result;
	int		length;
	int		i;

	i = -1;
	if (str == NULL)
		return (NULL);
	result = ft_calloc((count_words(str, (char[]){c, '\0'}) + 1),
			sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (*str)
	{
		if (!ft_strcontains((char[]){c, '\0'}, *str))
		{
			length = get_word_length(str, (char[]){c, '\0'});
			result[++i] = ft_substr(str, 0, length);
			if (result[i] == NULL)
			{
				ft_free_split(result);
				return (NULL);
			}
			str += length;
		}
		else
			str++;
	}
	return (result);
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