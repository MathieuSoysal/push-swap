/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:44:13 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/11 00:38:25 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_recursif(long nb, int fd)
{
	if (nb / 10 != 0)
		ft_putnbr_recursif(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	long_nb;

	long_nb = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		long_nb = long_nb * -1;
	}
	ft_putnbr_recursif(long_nb, fd);
}
/* 
int	main(void)
{
	ft_putnbr_fd(1543, 1);
	ft_putnbr_fd(-1543, 1);
	return (0);
}
 */