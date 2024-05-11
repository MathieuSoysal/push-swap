/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:19:51 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/12 23:22:15 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- > 0 && *s1 && *s2)
		if ((unsigned char)(*(s1++)) != (unsigned char)(*(s2++)))
			return ((unsigned char)(*(s1 - 1)) - (unsigned char)(*(s2 - 1)));
	if (n + 1 != 0)
		return ((unsigned char)(*(s1)) - (unsigned char)(*(s2)));
	return (0);
}
/* 
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d should be egual to %d\n", ft_strncmp("sa", "so", 3),
		strncmp("sa", "so", 3));
	printf("%d should be egual to %d\n", ft_strncmp("so", "so", 20),
		strncmp("so", "so", 20));
	printf("%d should be egual to %d\n", ft_strncmp("sa", "so", 1),
		strncmp("sa", "so", 1));
	printf("%d should be egual to %d\n", ft_strncmp("sa", "so", 3),
		strncmp("sa", "so", 3));
	printf("%d should be egual to %d\n", ft_strncmp("sa", "s", 3), strncmp("sa",
			"s", 3));
	printf("%d should be egual to %d\n", ft_strncmp("sa", "s", 2), strncmp("sa",
			"s", 2));
	printf("%d should be egual to %d\n", ft_strncmp("saz", "saz", 2),
		strncmp("saz", "saz", 2));
	printf("%d should be egual to %d\n", ft_strncmp("test\200", "test\0", 6),
		strncmp("test\200", "test\0", 6));
	return (0);
}
 */