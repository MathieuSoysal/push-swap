/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:38:03 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/12 19:10:51 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	const char	*last;

	last = str;
	while (*last)
		last++;
	return (last - str);
}
/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%ld should be egual to %ld\n", ft_strlen("154"), strlen("154"));
	printf("%ld should be egual to %ld\n", ft_strlen(""), strlen(""));
	return (0);
}
 */