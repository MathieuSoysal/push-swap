/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_optimiser.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 02:49:48 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/12 02:57:58 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROTATE_OPTIMISER_H
# define ROTATE_OPTIMISER_H

# include "../../structures/push_swap_stack/push_swap_stack.h"

/**
 * @brief Optimise the rotate in the stack a
 * @param stacks The stacks of push_swap
 * @param cpt The number of rotate to optimise
 */
void	ra_opti(t_push_swap_stacks *stacks, int *cpt);

/**
 * @brief Optimise the reverse rotate in the stack a
 * @param stacks The stacks of push_swap
 * @param cpt The number of rotate to optimise
 */
void	rra_opti(t_push_swap_stacks *stacks, int *cpt);

/**
 * @brief Optimise the rotate in the stack b
 * @param stacks The stacks of push_swap
 * @param cpt The number of rotate to optimise
 */
void	rb_opti(t_push_swap_stacks *stacks, int *cpt);

/**
 * @brief Optimise the reverse rotate in the stack b
 * @param stacks The stacks of push_swap
 * @param cpt The number of rotate to optimise
 */
void	rrb_opti(t_push_swap_stacks *stacks, int *cpt);

#endif // ROTATE_OPTIMISER_H