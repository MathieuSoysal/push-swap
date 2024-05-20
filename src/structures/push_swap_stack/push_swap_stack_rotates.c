/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_rotates.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:06:31 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/20 08:49:54 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../utils/libft/libft.h"
#include "push_swap_stack.h"

static void	silent_ra(t_push_swap_stacks *stacks)
{
	if (stacks->a->size < 2)
		return ;
	circle_linked_list_rotate(stacks->a, TAIL_TO_HEAD, 1);
}

static void	silent_rb(t_push_swap_stacks *stacks)
{
	if (stacks->b->size < 2)
		return ;
	circle_linked_list_rotate(stacks->b, TAIL_TO_HEAD, 1);
}

void	ra(t_push_swap_stacks *stacks)
{
	silent_ra(stacks);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_push_swap_stacks *stacks)
{
	silent_rb(stacks);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_push_swap_stacks *stacks)
{
	silent_ra(stacks);
	silent_rb(stacks);
	ft_putstr_fd("rr\n", 1);
}
