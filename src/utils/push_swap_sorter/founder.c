/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   founder.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 01:27:30 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/16 04:55:07 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "founder.h"
#include <limits.h>

int	push_swap_stack_find_min_index(t_stack *stack)
{
	int		min;
	int		min_index;
	int		index;
	t_node	*node;

	min = INT_MAX;
	min_index = -1;
	index = 0;
	node = stack->head;
	while (node)
	{
		if (*(int *)node->content < min)
		{
			min = *(int *)node->content;
			min_index = index;
		}
		node = node->next;
		index++;
	}
	return (min_index);
}

int	push_swap_stack_find_max_index(t_stack *stack)
{
	int		max;
	int		max_index;
	int		index;
	t_node	*node;

	max = INT_MIN;
	max_index = -1;
	index = 0;
	node = stack->head;
	while (node)
	{
		if (*(int *)node->content > max)
		{
			max = *(int *)node->content;
			max_index = index;
		}
		node = node->next;
		index++;
	}
	return (max_index);
}
