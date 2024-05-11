/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:51:36 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/12 22:23:56 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	negatif;

	negatif = 1;
	result = 0;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\r'
		|| *nptr == '\v' || *nptr == '\f' || *nptr == '\t')
		nptr++;
	if (*nptr == '-')
	{
		negatif = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		result *= 10;
		result += (*nptr - '0') * negatif;
		nptr++;
	}
	return (result);
}

/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str;

	str = "154";
	printf("%d should be egual to %d\n", ft_atoi(str), atoi(str));
	str = "";
	printf("%d should be egual to %d\n", ft_atoi(str), atoi(str));
	str = "     154";
	printf("%d should be egual to %d\n", ft_atoi(str), atoi(str));
	str = "     -154";
	printf("%d should be egual to %d\n", ft_atoi(str), atoi(str));
	str = "     --154";
	printf("%d should be egual to %d\n", ft_atoi(str), atoi(str));
	str = "     -15d4";
	printf("%d should be egual to %d\n", ft_atoi(str), atoi(str));
	str = "     -d154";
	printf("%d should be egual to %d\n", ft_atoi(str), atoi(str));
	str = "     +154";
	printf("%d should be egual to %d\n", ft_atoi(str), atoi(str));
	str = "     ++154";
	printf("%d should be egual to %d\n", ft_atoi(str), atoi(str));
	str = "\n\n\n  -46\b9 \n5d6";
	printf("%d should be egual to %d\n", ft_atoi(str), atoi(str));
	str = "\t\n\r\v\f  469 \n";
	printf("%d should be egual to %d\n", ft_atoi(str), atoi(str));
	return (0);
}
 */