/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:45:12 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/12 19:55:08 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	while (n-- > 0)
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
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
	int	tab2[] = {9, 9, 9, 9, 9, 9};

	print_tab(tab, 6);
	printf("\n");
	ft_memcpy(tab, tab2, 12);
	print_tab(tab, 6);
	ft_memcpy(NULL, NULL, 3);
	return (0);
}
 */