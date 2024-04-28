/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:23:44 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/28 19:24:03 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	a;
	int	b;
	int	ans;

	a = 1;
	b = 3;
	ans = argmax(a, b);
	return (0);
}
