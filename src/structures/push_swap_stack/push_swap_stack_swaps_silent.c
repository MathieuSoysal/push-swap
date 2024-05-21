/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_swaps_silent.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:06:31 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/21 09:09:39 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../utils/libft/libft.h"
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

void	silent_sa(t_push_swap_stacks *stacks)
{
	swap(stacks->a);
}

void	silent_sb(t_push_swap_stacks *stacks)
{
	swap(stacks->b);
}

void	silent_ss(t_push_swap_stacks *stacks)
{
	swap(stacks->a);
	swap(stacks->b);
}
