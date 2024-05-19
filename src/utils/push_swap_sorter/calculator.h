/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 03:59:23 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/18 07:58:27 by hsoysal          ###   ########.fr       */
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
int		calculate_index_of_given_num(t_stack *stack, int num);

/**
 * @brief Found the best index in the stack a,
	to put the element in the right place in the stack b
 * @param stacks The t_push_swap_stacks from push_swap
 * @param moves_in_a The moves to get the best element in the stack a
 * @param moves_in_b The moves to put the best element to the stack b
 */
void	push_swap_calculate_best_moves(t_push_swap_stacks *stacks,
			int *moves_in_a, int *moves_in_b);

/**
 * @brief Calculate the score of the index,
	to put the element in the right place in the stack b
 * @param stacks The t_push_swap_stacks from push_swap
 * @param index The index to calculate the score
 * @return The score of the index
 */
int		calculate_score(t_push_swap_stacks *stacks, int index_in_a,
			int index_in_b);

int		calcul_total_moves(int index, int score);

/**
 * @brief Get the index of the number in the stack
 * @param stack The t_stack from push_swap
 * @param num The number to get the index
 * @return The index of the number in the stack
 */
int		get_index_of_num(t_stack *stack, int num);

/**
 * @brief Replace the number in the tab
 * @param tab The tab of the 3 numbers
 * @param num The number to replace
 */
void	replace_num_in_tab(int tab[3], int num, int new_num);

/**
 * @brief Get moves to put the element in the right place in the stack a
 * @param stacks The t_push_swap_stacks from push_swap
 * @return The moves to put the element in the right place in the stack a,
	positive if the rotation is better,
	negative if the reverse rotation is better
 */
int		get_moves_to_put_first_element_from_b_to_a(t_push_swap_stacks *stacks);

#endif // CALCULATOR_H
