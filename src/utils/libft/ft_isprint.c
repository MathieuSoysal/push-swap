/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:09:34 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/11 03:50:31 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (16384);
	return (0);
}

/*
#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d should be egual to %d\n", ft_isprint(128), isprint(128));
	printf("%d should be egual to %d\n", ft_isprint(0), isprint(0));
	printf("%d should be egual to %d\n", ft_isprint(32), isprint(32));
	printf("%d should be egual to %d\n", ft_isprint(33), isprint(33));
	printf("%d should be egual to %d\n", ft_isprint(127), isprint(127));
	printf("%d should be egual to %d\n", ft_isprint(126), isprint(126));
	return (0);
}
 */