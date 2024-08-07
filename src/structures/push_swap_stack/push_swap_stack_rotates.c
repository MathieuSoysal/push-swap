/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_rotates.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:06:31 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/21 08:59:23 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../utils/libft/libft.h"
#include "push_swap_silent.h"
#include "push_swap_stack.h"

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
	silent_rr(stacks);
	ft_putstr_fd("rr\n", 1);
}
