/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_swaps.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:06:31 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/20 08:50:30 by hsoysal          ###   ########.fr       */
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

void	sa(t_push_swap_stacks *stacks)
{
	swap(stacks->a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_push_swap_stacks *stacks)
{
	swap(stacks->b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_push_swap_stacks *stacks)
{
	swap(stacks->a);
	swap(stacks->b);
	ft_putstr_fd("ss\n", 1);
}
