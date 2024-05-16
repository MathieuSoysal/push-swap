/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 04:08:45 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/16 04:53:25 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "calculator.h"
#include <limits.h>

int	calcul_nb_distinct_moves(int index_moves, int score)
{
	if (ft_get_sign(index_moves) == ft_get_sign(score))
		return (ft_max(ft_abs(index_moves), ft_abs(score)));
	return (ft_abs(score) + ft_abs(index_moves));
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
static int	convert_index_to_moves(int index, int size, int score)
{
	int	positive_index;
	int	negative_index;

	positive_index = calcul_nb_distinct_moves(index, score);
	negative_index = calcul_nb_distinct_moves(index - size, score);
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
static int	calculate_score(t_push_swap_stacks *stacks, int index,
		int score)
{
	int	positive_index;
	int	negative_index;

	positive_index = calcul_nb_distinct_moves(index, score);
	negative_index = calcul_nb_distinct_moves(index - stacks->a->size, score);
	if (positive_index < negative_index)
		return (positive_index);
	return (negative_index);
}

void	push_swap_calculate_best_index(t_push_swap_stacks *stacks,
		int *best_a_moves, int *best_b_moves)
{
	int		moves_b;
	int		index;
	t_node	*node;
	int		best_score;
	int		current_score;

	index = 0;
	node = stacks->a->head;
	best_score = INT_MAX;
	while (node)
	{
		moves_b = calculate_push_swap_moves(stacks->b, *(int *)node->content);
		current_score = calculate_score(stacks, index, moves_b);
		if (best_score == INT_MAX || current_score < best_score)
		{
			*best_a_moves = convert_index_to_moves(index, stacks->a->size,
					moves_b);
			*best_b_moves = moves_b;
			best_score = current_score;
		}
		node = node->next;
		index++;
	}
}
