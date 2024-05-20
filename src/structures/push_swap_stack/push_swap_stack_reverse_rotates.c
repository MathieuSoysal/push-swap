/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_reverse_rotates.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:06:31 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/20 08:49:03 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../utils/libft/libft.h"
#include "push_swap_stack.h"

static void	silent_rra(t_push_swap_stacks *stacks)
{
	if (stacks->a->size < 2)
		return ;
	circle_linked_list_rotate(stacks->a, HEAD_TO_TAIL, 1);
}

static void	silent_rrb(t_push_swap_stacks *stacks)
{
	if (stacks->b->size < 2)
		return ;
	circle_linked_list_rotate(stacks->b, HEAD_TO_TAIL, 1);
}

void	rra(t_push_swap_stacks *stacks)
{
	silent_rra(stacks);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_push_swap_stacks *stacks)
{
	silent_rrb(stacks);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_push_swap_stacks *stacks)
{
	silent_rra(stacks);
	silent_rrb(stacks);
	ft_putstr_fd("rrr\n", 1);
}
