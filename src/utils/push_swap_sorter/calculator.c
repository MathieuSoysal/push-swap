/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 04:08:45 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/16 01:21:27 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "calculator.h"
#include <limits.h>

int	calculNbDistinctMoves(int index_moves, int score)
{
	if (ft_get_sign(index_moves) == ft_get_sign(score))
		return (ft_max(ft_abs(index_moves), ft_abs(score)));
	return (ft_abs(score) + ft_abs(index_moves));
}

int	push_swap_calculate_push_swap_moves(t_stack *stack, int num)
{
	int		moves;
	int		min;
	int		max;
	int		min_index;
	int		max_index;
	t_node	*node;
	t_node	*previous_node;

	min = INT_MAX;
	max = INT_MIN;
	min_index = 0;
	max_index = 0;
	moves = 0;
	node = stack->head;
	previous_node = stack->tail;
	while (node)
	{
		if (*(int *)node->content < min)
		{
			min = *(int *)node->content;
			min_index = moves;
		}
		if (*(int *)node->content > max)
		{
			max = *(int *)node->content;
			max_index = moves;
		}
		if (*(int *)previous_node->content > num && *(int *)node->content < num)
			break ;
		previous_node = node;
		node = node->next;
		moves++;
	}
	if (num < min)
		return ((min_index + 1) % stack->size);
	if (num > max)
		return (max_index);
	if (moves > ft_abs(moves - stack->size))
		moves = moves - stack->size;
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

	positive_index = calculNbDistinctMoves(index, score);
	negative_index = calculNbDistinctMoves(index - size, score);
	if (positive_index < negative_index)
		return (index);
	return (index - size);
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

	positive_index = calculNbDistinctMoves(index, score);
	negative_index = calculNbDistinctMoves(index - stacks->a->size, score);
	if (positive_index < negative_index)
		return (positive_index);
	return (negative_index);
}

void	push_swap_calculate_best_index(t_push_swap_stacks *stacks,
		int *best_index, int *best_moves)
{
	int		moves;
	int		index;
	t_node	*node;
	int		mem_best_moves;

	index = 0;
	node = stacks->a->head;
	*best_moves = INT_MAX;
	mem_best_moves = 0;
	while (node)
	{
		moves = push_swap_calculate_push_swap_moves(stacks->b,
				*(int *)node->content);
		if (*best_moves == INT_MAX
			|| ft_abs(push_swap_calculate_index_score(stacks, index,
					moves)) < ft_abs(*best_moves))
		{
			*best_index = push_swap_convert_index(index, stacks->a->size,
					moves);
			mem_best_moves = moves;
			*best_moves = push_swap_calculate_index_score(stacks, index, moves);
		}
		node = node->next;
		index++;
	}
	*best_moves = mem_best_moves;
}
