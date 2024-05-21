/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 06:25:06 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/21 10:03:38 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../utils/libft/libft.h"
#include "input_checker.h"
#include <limits.h>

bool	is_valid_input(int size, char **numbers)
{
	int	i;

	i = -1;
	while (++i < size)
		if (!is_valid_str(numbers[i]))
			return (false);
	return (true);
}

bool	is_valid_str(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	is_valid_int(int size, int *numbers, long long num, int index_num)
{
	int	i;

	if (num > INT_MAX || num < INT_MIN)
		return (false);
	i = -1;
	while (++i < size)
		if (numbers[i] == num && i != index_num)
			return (false);
	return (true);
}

bool	is_valid_int_array(int size, int *numbers)
{
	int	i;

	i = -1;
	while (++i < size)
		if (!is_valid_int(size, numbers, numbers[i], i))
			return (false);
	return (true);
}
