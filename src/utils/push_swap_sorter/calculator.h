/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 03:59:23 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/11 04:08:21 by hsoysal          ###   ########.fr       */
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
 *
 */
int	push_swap_calculate_push_swap_moves(t_stack *stack, int num);

#endif // CALCULATOR_H
