/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primary_sorter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 00:58:57 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/11 03:01:13 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_printer/push_swap_printer.h"
#include "founder.h"
#include "push_swap_sorter.h"

static void	push_swap_sort_three(t_push_swap_stacks *stacks)
{
	int	minIndex;
	int	maxIndex;

	minIndex = push_swap_stack_find_min_index(stacks->a);
	maxIndex = push_swap_stack_find_max_index(stacks->a);
	if (minIndex == 0 && maxIndex == 1)
	{
		sa(stacks);
		ra(stacks);
	}
	else if (minIndex == 1 && maxIndex == 0)
	{
		ra(stacks);
		sa(stacks);
	}
	else if (minIndex == 2 && maxIndex == 0)
	{
		ra(stacks);
		sa(stacks);
	}
	else if (minIndex == 1 && maxIndex == 2)
		sa(stacks);
	else if (minIndex == 2 && maxIndex == 1)
		rra(stacks);
	return ;
}

void	push_swap_sort(t_push_swap_stacks *stacks)
{
	if (push_swap_stacks_is_finished(stacks) == 1 || stacks->a->size < 2)
		return ;
	if (stacks->a->size > 3)
	{
	}
	else if (stacks->a->size == 2)
		sa(stacks);
	else if (stacks->a->size == 3)
		push_swap_sort_three(stacks);
}
