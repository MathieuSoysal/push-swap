/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_pushs_silent.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:06:31 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/21 09:09:29 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../utils/libft/libft.h"
#include "push_swap_stack.h"

static void	push(t_stack *from, t_stack *to)
{
	void	*first;

	if (from->size == 0)
		return ;
	first = circle_linked_list_pop_first(from);
	circle_linked_list_add_first(to, first);
}

void	silent_pa(t_push_swap_stacks *stacks)
{
	push(stacks->b, stacks->a);
}

void	silent_pb(t_push_swap_stacks *stacks)
{
	push(stacks->a, stacks->b);
}
