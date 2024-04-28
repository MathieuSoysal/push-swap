/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_swaps.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:06:31 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/29 01:11:34 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_stack.h"

static void	swap(t_stack *stack)
{
	void	*first;
	void	*second;

	if (stack->size < 2)
		return ;
	first = circle_linked_list_pop_first(stack);
	second = circle_linked_list_pop_first(stack);
	circle_linked_list_add_first(stack, first);
	circle_linked_list_add_first(stack, second);
}

void	sa(t_push_swap_stacks *stacks)
{
	swap(stacks->a);
}

void	sb(t_push_swap_stacks *stacks)
{
	swap(stacks->b);
}

void	ss(t_push_swap_stacks *stacks)
{
	swap(stacks->a);
	swap(stacks->b);
}
