/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   founder.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 01:27:30 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/11 01:34:27 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "founder.h"
#include <limits.h>

int	push_swap_stack_find_min_index(t_stack *stack)
{
	int		min;
	int		minIndex;
	int		index;
	t_node	*node;

	min = INT_MAX;
	minIndex = -1;
	index = 0;
	node = stack->head;
	while (node)
	{
		if (*(int *)node->content < min)
		{
			min = *(int *)node->content;
			minIndex = index;
		}
		node = node->next;
		index++;
	}
	return (minIndex);
}

int	push_swap_stack_find_max_index(t_stack *stack)
{
	int		max;
	int		maxIndex;
	int		index;
	t_node	*node;

	max = INT_MIN;
	maxIndex = -1;
	index = 0;
	node = stack->head;
	while (node)
	{
		if (*(int *)node->content > max)
		{
			max = *(int *)node->content;
			maxIndex = index;
		}
		node = node->next;
		index++;
	}
	return (maxIndex);
}
