/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:42:12 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/11 07:01:05 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	swap(char *a, char *b)
{
	char	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static void	ft_rev_str(char *s, int size)
{
	int	i;

	i = -1;
	while (++i < size / 2)
		swap(s + i, s + ((size - 1) - i));
}

static char	*ft_itoa_long_recur(long long n, int current_index, int is_neg)
{
	char	*result;

	if (n < 10)
	{
		result = (char *)malloc((current_index + 2 + is_neg) * sizeof(char));
		if (result == NULL)
			return (NULL);
		if (is_neg)
			result[current_index + 1] = '-';
		result[current_index + 1 + is_neg] = '\0';
	}
	else
		result = ft_itoa_long_recur(n / 10, current_index + 1, is_neg);
	if (result == NULL)
		return (NULL);
	result[current_index] = (n % 10) + '0';
	return (result);
}

static char	*ft_itoa_long(int n)
{
	long long	long_n;
	char		*result;

	if (n >= 0)
	{
		result = (ft_itoa_long_recur((long long)n, 0, 0));
	}
	else
	{
		long_n = (long long)n * -1;
		result = ft_itoa_long_recur(long_n, 0, 1);
	}
	if (result == NULL)
		return (NULL);
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;

	result = ft_itoa_long(n);
	if (result == NULL)
		return (NULL);
	ft_rev_str(result, ft_strlen(result));
	return (result);
}
/*
int	main(void)
{
	printf("%s should be equal to %s\n", ft_itoa(105), "105");
	printf("%s should be equal to %s\n", ft_itoa(-105), "-105");
	return (0);
}
 */