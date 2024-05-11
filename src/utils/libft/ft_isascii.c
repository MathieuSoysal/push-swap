/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:35:28 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/06 12:24:06 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
/* 
#include <ctype.h>
#include <stdio.h>

int	main(int argc, char const *argv[])
{
	printf("%d should be egual to %d\n", ft_isascii(128), isascii(128));
	printf("%d should be egual to %d\n", ft_isascii(-4), isascii(-4));
	printf("%d should be egual to %d\n", ft_isascii(466), isascii(466));
	printf("%d should be egual to %d\n", ft_isascii(127), isascii(127));
	printf("%d should be egual to %d\n", ft_isascii(1), isascii(1));
	return (0);
}
 */