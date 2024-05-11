/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:03:49 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/11 07:24:47 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s != NULL)
	{
		i = -1;
		while (s[++i])
			f(i, &s[i]);
	}
}
/*
void	myfunction(unsigned int i, char *c)
{
	*c = (i + '0');
}

int	main(void)
{
	char	s[] = {'s', 'a', 'd', '\0'};

	ft_striteri(s, myfunction);
	printf("%s should be equal to %s\n", s, "012");
	return (0);
}
 */