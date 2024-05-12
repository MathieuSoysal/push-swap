/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turkish_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 02:21:22 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/12 03:03:05 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calculator.h"
#include "rotate_optimiser.h"
#include "turkish_sort.h"

static void	push_swap_sort_turkish1(t_push_swap_stacks *stacks)
{
	int	index;
	int	score;
	int	cpt_rot;

	cpt_rot = 0;
	while (stacks->a->size > 3)
	{
		score = 0;
		push_swap_calculate_best_index(stacks, &index, &score);
		if (index < 0)
			while (index++)
				cpt_rot--;
		else
			while (index--)
				cpt_rot++;
		if (score > 0)
			while (score--)
				rb_opti(stacks, &cpt_rot);
		else
			while (score++)
				rrb_opti(stacks, &cpt_rot);
		pb(stacks);
	}
}

void	push_swap_sort_turkish(t_push_swap_stacks *stacks)
{
	pb(stacks);
	pb(stacks);
}
