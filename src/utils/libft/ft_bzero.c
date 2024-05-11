/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:36:22 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/12 19:13:34 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
		((unsigned char *)s)[n] = 0;
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
	ft_bzero(tab, 12);
	print_tab(tab, 6);
	return (0);
}
 */