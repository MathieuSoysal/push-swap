/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 04:08:45 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/17 07:17:10 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "calculator.h"
#include <limits.h>

int	calcul_total_moves(int index_in_a, int index_in_b)
{
	if (ft_get_sign(index_in_a) == ft_get_sign(index_in_b))
		return (ft_max(ft_abs(index_in_a), ft_abs(index_in_b)));
	return (ft_abs(index_in_b) + ft_abs(index_in_a));
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
static int	convert_index_to_moves(int index1, int size1, int index2, int size2)
{
	int	revert_2_not_1;
	int	revert_1_not_2;
	int	revert_1_2;
	int	not_1_not_2;
	int	best;

	revert_2_not_1 = calcul_total_moves(index1, index2 - size2);
	revert_1_not_2 = calcul_total_moves(index1 - size1, index2);
	revert_1_2 = calcul_total_moves(index1 - size1, index2 - size2);
	not_1_not_2 = calcul_total_moves(index1, index2);
	best = ft_min(ft_min(revert_2_not_1, revert_1_not_2), ft_min(revert_1_2,
				not_1_not_2));
	if (best == revert_2_not_1 || best == not_1_not_2)
		return (index1);
	return (index1 - size1);
}

int	calculate_score(t_push_swap_stacks *stacks, int index_in_a, int index_in_b)
{
	int	revert_b_not_a;
	int	revert_a_not_b;
	int	revert_a_b;
	int	not_a_not_b;

	revert_b_not_a = calcul_total_moves(index_in_a, index_in_b
			- stacks->b->size);
	revert_a_not_b = calcul_total_moves(index_in_a - stacks->a->size,
			index_in_b);
	revert_a_b = calcul_total_moves(index_in_a - stacks->a->size, index_in_b
			- stacks->b->size);
	not_a_not_b = calcul_total_moves(index_in_a, index_in_b);
	return (ft_min(ft_min(revert_b_not_a, revert_a_not_b), ft_min(revert_a_b,
				not_a_not_b)));
}

void	push_swap_calculate_best_moves(t_push_swap_stacks *stacks,
		int *best_a_moves, int *best_b_moves)
{
	int		index_in_b;
	int		index_in_a;
	t_node	*node;
	int		best_score;
	int		current_score;

	index_in_a = 0;
	node = stacks->a->head;
	best_score = INT_MAX;
	while (node)
	{
		index_in_b = calculate_index_of_given_num(stacks->b,
				*(int *)node->content);
		current_score = calculate_score(stacks, index_in_a, index_in_b);
		if (best_score == INT_MAX || current_score < best_score)
		{
			*best_a_moves = convert_index_to_moves(index_in_a, stacks->a->size,
					index_in_b, stacks->b->size);
			*best_b_moves = convert_index_to_moves(index_in_b, stacks->b->size,
					index_in_a, stacks->a->size);
			best_score = current_score;
		}
		node = node->next;
		index_in_a++;
	}
}
