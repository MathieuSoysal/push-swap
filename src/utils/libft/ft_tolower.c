/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:35:29 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/11 00:38:25 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
/* 
#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d should be egual to %d\n", ft_tolower('a'), tolower('a'));
	printf("%d should be egual to %d\n", ft_tolower('A'), tolower('A'));
	printf("%d should be egual to %d\n", ft_tolower(0), tolower(0));
	printf("%d should be egual to %d\n", ft_tolower(60), tolower(60));
	printf("%d should be egual to %d\n", ft_tolower(127), tolower(127));
	return (0);
}
 */