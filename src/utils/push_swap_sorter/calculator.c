/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 04:08:45 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/14 20:55:36 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "calculator.h"
#include <limits.h>

int	push_swap_calculate_push_swap_moves(t_stack *stack, int num)
{
	int		moves;
	t_node	*node;
	t_node	*previous_node;

	moves = 0;
	node = stack->head;
	previous_node = stack->tail;
	while (node)
	{
		if (*(int *)previous_node->content > num && *(int *)node->content < num)
			break ;
		previous_node = node;
		node = node->next;
		moves++;
	}
	if (moves > stack->size - moves)
		moves = (stack->size - moves) * -1;
	return (moves);
}

/**
 * @brief Convert index to a positive index or a negative index,
	its depends on the score
 * @param index The index to convert
 * @param size The size of the stack
 * @param score The score of the index
 * @return The converted index, positive if is better to use rotate,
	negative if is better to use reverse rotate
 */
static int	push_swap_convert_index(int index, int size, int score)
{
	int	positive_index;
	int	negative_index;

	positive_index = index;
	negative_index = size - index; // TODO: Check if this is correct
	if (ft_abs(score - positive_index) < ft_abs(score - negative_index))
		return (positive_index);
	return (negative_index);
}

/**
 * @brief Calculate the score of the index,
	to put the element in the right place in the stack b
 * @param stacks The t_push_swap_stacks from push_swap
 * @param index The index to calculate the score
 * @return The score of the index
 */
static int	push_swap_calculate_index_score(t_push_swap_stacks *stacks,
		int index, int score)
{
	int	positive_index;
	int	negative_index;

	positive_index = index;
	negative_index = (stacks->a->size - index) * -1;
	if (ft_abs(score - positive_index) < ft_abs(score - negative_index))
		return (score - positive_index);
	return (score - negative_index);
}

void	push_swap_calculate_best_index(t_push_swap_stacks *stacks,
		int *best_index, int *best_moves)
{
	int		moves;
	int		index;
	t_node	*node;

	index = 0;
	node = stacks->a->head;
	*best_moves = INT_MAX;
	while (node)
	{
		moves = push_swap_calculate_push_swap_moves(stacks->b,
				*(int *)node->content);
		if (*best_moves == -1 || ft_abs(push_swap_calculate_index_score(stacks,
					moves, index)) < ft_abs(*best_moves))
		{
			*best_index = push_swap_convert_index(index, stacks->a->size,
					moves);
			*best_moves = push_swap_calculate_index_score(stacks, moves, index);
		}
		node = node->next;
		index++;
	}
	*best_moves += *best_index;
}
