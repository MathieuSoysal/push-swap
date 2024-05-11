/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:31:54 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/11 05:20:36 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb * size != 0 && (nmemb * size < size || nmemb * size < nmemb))
		return (NULL);
	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, nmemb * size);
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%p should be equal to %p\n", ft_calloc(5, 5), calloc(5, 5));
	printf("%p should be equal to %p\n", ft_calloc(5, 0), calloc(5, 0));
	printf("%p should be equal to %p\n", ft_calloc(0, 0), calloc(0, 0));
	printf("%p should be equal to %p\n", ft_calloc(0, 5), calloc(0, 5));
	printf("%p should be equal to %p\n", ft_calloc(55555555555, 5555555),
		calloc(55555555555, 5555555));
	printf("%d should be equal to %d\n", *((int *)ft_calloc(0, 4)),
		*((int *)calloc(0, 5)));
	return (0);
}
 */