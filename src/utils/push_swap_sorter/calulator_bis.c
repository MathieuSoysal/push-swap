/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calulator_bis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 02:48:08 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/19 07:47:09 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "calculator.h"
#include <limits.h>

static void	update_min(int *min_max_index, int new, int moves)
{
	if (new < min_max_index[0])
	{
		min_max_index[0] = new;
		min_max_index[2] = moves;
	}
}

static void	update_max(int *min_max_index, int new, int moves)
{
	if (new > min_max_index[1])
	{
		min_max_index[1] = new;
		min_max_index[3] = moves;
	}
}

static int	*init_min_max_indexes(int *min_max_index)
{
	min_max_index[0] = INT_MAX;
	min_max_index[1] = INT_MIN;
	min_max_index[2] = 0;
	min_max_index[3] = 0;
	return (min_max_index);
}

/**
 * @brief Update the number of moves with the min, max indexes,
	and if need to reverse rotate
 * @param stack The t_stack from push_swap
 * @param num The number to put in the stack
 */
static void	update_index_with_min_max(t_stack *stack, int num,
		int *min_max_index, int *current_index)
{
	if (num < min_max_index[0])
		*current_index = ((min_max_index[2] + 1) % stack->size);
	if (num > min_max_index[1])
		*current_index = min_max_index[3];
}

int	calculate_index_of_given_num(t_stack *stack, int num)
{
	int		index;
	int		min_max_index[4];
	t_node	*node;
	t_node	*previous_node;

	init_min_max_indexes(min_max_index);
	index = 0;
	node = stack->head;
	previous_node = stack->tail;
	while (node)
	{
		update_min(min_max_index, *(int *)node->content, index);
		update_max(min_max_index, *(int *)node->content, index);
		if (*(int *)previous_node->content > num && *(int *)node->content < num)
			break ;
		previous_node = node;
		node = node->next;
		index++;
	}
	update_index_with_min_max(stack, num, min_max_index, &index);
	return (index);
}
