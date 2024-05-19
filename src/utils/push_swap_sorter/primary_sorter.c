/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primary_sorter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 00:58:57 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/19 08:21:28 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_printer/push_swap_printer.h"
#include "founder.h"
#include "push_swap_sorter.h"
#include "turkish_sort.h"

void	push_swap_sort_three(t_push_swap_stacks *stacks)
{
	int	min_index;
	int	max_index;

	min_index = push_swap_stack_find_min_index(stacks->a);
	max_index = push_swap_stack_find_max_index(stacks->a);
	if (min_index == 0 && max_index == 1)
	{
		sa(stacks);
		ra(stacks);
	}
	else if (min_index == 1 && max_index == 0)
		ra(stacks);
	else if (min_index == 2 && max_index == 0)
	{
		ra(stacks);
		sa(stacks);
	}
	else if (min_index == 1 && max_index == 2)
		sa(stacks);
	else if (min_index == 2 && max_index == 1)
		rra(stacks);
	return ;
}

void	push_swap_sort(t_push_swap_stacks *stacks)
{
	if (push_swap_stacks_is_finished(stacks) == 1 || stacks->a->size < 2)
		return ;
	if (stacks->a->size > 3)
		push_swap_sort_turkish(stacks);
	else if (stacks->a->size == 2)
		sa(stacks);
	else if (stacks->a->size == 3)
		push_swap_sort_three(stacks);
}
