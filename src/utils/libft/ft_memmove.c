/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:41:11 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/12 20:13:37 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_c;

	dest_c = dest;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		while (n-- > 0)
			*dest_c++ = *((unsigned char *)src++);
	else
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
	int	*tab2;
	int	tab1[] = {1, 2, 3, 4, 5, 6};
	int	*tab12;

	tab2 = tab + 2;
	print_tab(tab2, 6);
	printf("\n");
	ft_memmove(tab2, tab, 12);
	print_tab(tab2, 6);
	printf("\n");
	printf("\n");
	tab12 = tab1 + 2;
	print_tab(tab12, 6);
	printf("\n");
	memmove(tab12, tab1, 12);
	print_tab(tab12, 6);
	memmove(NULL, NULL, 12);
	return (0);
}
 */