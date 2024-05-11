/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_printer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 02:21:33 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/11 02:44:47 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "push_swap_printer.h"

void	push_swap_stacks_print(t_push_swap_stacks *stacks)
{
	t_node	*node;

	node = stacks->a->head;
	ft_putstr_fd("Stack A: ", 1);
	while (node)
	{
		ft_putnbr_fd(*(int *)node->content, 1);
		ft_putchar_fd(' ', 1);
		node = node->next;
	}
	ft_putstr_fd("\n", 1);
	node = stacks->b->head;
	ft_putstr_fd("Stack B: ", 1);
	while (node)
	{
		ft_putnbr_fd(*(int *)node->content, 1);
		ft_putchar_fd(' ', 1);
		node = node->next;
	}
	ft_putstr_fd("\n", 1);
}
