/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:00:24 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/07 16:18:11 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (2048);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(int argc, char const *argv[])
{
	printf("%d should be egual to %d\n", ft_isdigit(128), isdigit(128));
	printf("%d should be egual to %d\n", ft_isdigit(-4), isdigit(-4));
	printf("%d should be egual to %d\n", ft_isdigit('0'), isdigit('0'));
	printf("%d should be egual to %d\n", ft_isdigit('1'), isdigit('1'));
	printf("%d should be egual to %d\n", ft_isdigit('A'), isdigit('A'));
	printf("%d should be egual to %d\n", ft_isdigit('a'), isdigit('a'));
	printf("%d should be egual to %d\n", ft_isdigit(466), isdigit(466));
	printf("%d should be egual to %d\n", ft_isdigit(127), isdigit(127));
	return (0);
}
*/
