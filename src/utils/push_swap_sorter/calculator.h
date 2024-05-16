/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 03:59:23 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/16 03:10:19 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALCULATOR_H
# define CALCULATOR_H

# include "../../structures/push_swap_stack/push_swap_stack.h"

/**
 * @brief Calculate the number of "push swap" moves,
	to put it the new element in the right place,
	in the stack
 * @param stack The t_stack from push_swap
 * @param num The number to put in the stack
 * @return The number of moves,
	positive if the element is near the top of the stack,
	negative if the element is near the bottom of the stack
 */
int		calculate_push_swap_moves(t_stack *stack, int num);

/**
 * @brief Found the best index in the stack a,
	to put the element in the right place in the stack b
 * @param stacks The t_push_swap_stacks from push_swap
 * @param index The index of the best element in the stack a,
	negative if should use reverse rotate,
	positive if should use rotate
 * @param score The score of the best element in the stack a
 */
void	push_swap_calculate_best_index(t_push_swap_stacks *stacks, int *index,
			int *score);

int		calcul_nb_distinct_moves(int index, int score);

#endif // CALCULATOR_H
