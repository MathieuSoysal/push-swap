/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_reverse_rotates.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:06:31 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/21 08:59:41 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../utils/libft/libft.h"
#include "push_swap_silent.h"
#include "push_swap_stack.h"

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
	silent_rrr(stacks);
	ft_putstr_fd("rrr\n", 1);
}
