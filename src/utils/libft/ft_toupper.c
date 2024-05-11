/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:13:47 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/11 00:38:25 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
/* 
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d should be egual to %d\n", ft_toupper('a'), toupper('a'));
	printf("%d should be egual to %d\n", ft_toupper('A'), toupper('A'));
	printf("%d should be egual to %d\n", ft_toupper(0), toupper(0));
	printf("%d should be egual to %d\n", ft_toupper(60), toupper(60));
	printf("%d should be egual to %d\n", ft_toupper(127), toupper(127));
	return (0);
}
 */