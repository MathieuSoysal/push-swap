/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_swaps.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:06:31 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/21 09:04:01 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../utils/libft/libft.h"
#include "push_swap_silent.h"
#include "push_swap_stack.h"

void	sa(t_push_swap_stacks *stacks)
{
	silent_sa(stacks);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_push_swap_stacks *stacks)
{
	silent_sb(stacks);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_push_swap_stacks *stacks)
{
	silent_ss(stacks);
	ft_putstr_fd("ss\n", 1);
}
