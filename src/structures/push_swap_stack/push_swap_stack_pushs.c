/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_pushs.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:06:31 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/21 09:01:48 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../utils/libft/libft.h"
#include "push_swap_silent.h"
#include "push_swap_stack.h"

void	pa(t_push_swap_stacks *stacks)
{
	silent_pa(stacks);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_push_swap_stacks *stacks)
{
	silent_pb(stacks);
	ft_putstr_fd("pb\n", 1);
}
