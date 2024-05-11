/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:29:15 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/12 19:19:14 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*sc;

	sc = (unsigned char *)s;
	while (n-- > 0)
		sc[n] = c;
	return (s);
}
/*
#include <ctype.h>
#include <string.h>

void	print_tab(int *tab, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size)
		printf("%d ", tab[i]);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6};

	print_tab(tab, 6);
	printf("\n");
	ft_memset(tab, 0, 12);
	print_tab(tab, 6);
	return (0);
}
 */