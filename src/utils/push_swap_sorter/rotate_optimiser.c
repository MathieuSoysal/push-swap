/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_optimiser.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 02:58:46 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/12 03:01:10 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rotate_optimiser.h"

void	rb_opti(t_push_swap_stacks *stacks, int *cpt)
{
	if (*cpt > 0)
	{
		rr(stacks);
		(*cpt)--;
	}
	else
	{
		rb(stacks);
	}
}

void	rrb_opti(t_push_swap_stacks *stacks, int *cpt)
{
	if (*cpt < 0)
	{
		rrr(stacks);
		(*cpt)++;
	}
	else
	{
		rrb(stacks);
	}
}
