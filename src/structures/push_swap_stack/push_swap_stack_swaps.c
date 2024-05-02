/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_swaps.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:06:31 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/02 13:01:25 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_stack.h"

static void	swap(t_stack *stack)
{
	void	*first;
	void	*second;

	if (stack->size < 2)
		return ;
	first = stack->head->content;
	second = stack->head->next->content;
	stack->head->content = second;
	stack->head->next->content = first;
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
