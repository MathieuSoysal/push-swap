/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_rotates.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:06:31 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/29 01:47:34 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_stack.h"

void	ra(t_push_swap_stacks *stacks)
{
	if (stacks->a->size < 2)
		return ;
	circle_linked_list_rotate(stacks->a, TAIL_TO_HEAD, 1);
}

void	rb(t_push_swap_stacks *stacks)
{
	if (stacks->b->size < 2)
		return ;
	circle_linked_list_rotate(stacks->b, TAIL_TO_HEAD, 1);
}

void	rr(t_push_swap_stacks *stacks)
{
	ra(stacks);
	rb(stacks);
}

void	rra(t_push_swap_stacks *stacks)
{
	if (stacks->a->size < 2)
		return ;
	circle_linked_list_rotate(stacks->a, HEAD_TO_TAIL, 1);
}

void	rrb(t_push_swap_stacks *stacks)
{
	if (stacks->b->size < 2)
		return ;
	circle_linked_list_rotate(stacks->b, HEAD_TO_TAIL, 1);
}

void	rrr(t_push_swap_stacks *stacks)
{
	rra(stacks);
	rrb(stacks);
}
