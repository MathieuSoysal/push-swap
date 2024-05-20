/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 04:42:49 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/20 09:49:01 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "input_checker.h"
#include "internals.h"
#include "parser.h"

static char	*join_all_args(int argc, char **argv)
{
	char	*result;
	char	*tmp;
	int		i;

	result = ft_strdup("");
	if (!result)
		return (NULL);
	i = 1;
	while (i < argc)
	{
		tmp = ft_strjoin(result, argv[i]);
		free(result);
		if (tmp == NULL)
			return (NULL);
		result = ft_strjoin(tmp, " ");
		free(tmp);
		if (!result)
			return (NULL);
		i++;
	}
	return (result);
}

char	**parse_to_string_array(int argc, char **argv, int *size)
{
	char	*joined_args;
	char	**split;

	joined_args = join_all_args(argc, argv);
	if (!joined_args)
		return (NULL);
	split = ft_split(joined_args, ' ');
	free(joined_args);
	if (!split)
		return (NULL);
	*size = -1;
	while (split[++(*size)])
		if (!is_valid_str(split[*size]))
			return (free_splitted_argv(split), NULL);
	return (split);
}

static int	*parse_to_int_array(int size, char **string_array)
{
	int			*array;
	int			i;
	long long	tmp;

	i = -1;
	array = (int *)ft_calloc(size, sizeof(int));
	if (!array)
		return (NULL);
	while (++i < size)
	{
		tmp = ft_atoll(string_array[i]);
		if (!is_valid_int(i, array, tmp, i))
			return (free(array), NULL);
		array[i] = tmp;
	}
	return (array);
}

int	*parse_from_input_to_int_array(int argc, char **argv, int *size)
{
	char	**string_array;
	int		*int_array;

	string_array = parse_to_string_array(argc, argv, size);
	if (!string_array)
		return (NULL);
	int_array = parse_to_int_array(*size, string_array);
	ft_free_split(string_array);
	return (int_array);
}

t_push_swap_stacks	*parse_to_push_swap_stacks(int argc, char **argv)
{
	t_push_swap_stacks	*stacks;
	char				**string_array;
	int					*int_array;
	int					size;

	int_array = parse_from_input_to_int_array(argc, argv, &size);
	if (!int_array)
		return (NULL);
	stacks = push_swap_stacks_create(int_array, size);
	free(int_array);
	return (stacks);
}
