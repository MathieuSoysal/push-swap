/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_silent.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:56:14 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/21 08:57:15 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_SILENT_H
# define PUSH_SWAP_SILENT_H

# include "push_swap_stack.h"

/**
 * @brief Swap the first top two elements of the stack a
 * @param stacks The stacks of push_swap
 */
void	silent_sa(t_push_swap_stacks *stacks);

/**
 * @brief Swap the first top two elements of the stack b
 * @param stacks The stacks of push_swap
 */
void	silent_sb(t_push_swap_stacks *stacks);

/**
 * @brief Swap the first top two elements of the stack a and b
 * @param stacks The stacks of push_swap
 */
void	silent_ss(t_push_swap_stacks *stacks);

/**
 * @brief Push the first top element of the stack a to the stack b
 * @param stacks The stacks of push_swap
 */
void	silent_pa(t_push_swap_stacks *stacks);

/**
 * @brief Push the first top element of the stack b to the stack a
 * @param stacks The stacks of push_swap
 */
void	silent_pb(t_push_swap_stacks *stacks);

/**
 * @brief Shift up all elements of stack a by 1.
 * The first element becomes the last one.
 * @param stacks The stacks of push_swap
 */
void	silent_ra(t_push_swap_stacks *stacks);

/**
 * @brief Shift up all elements of stack b by 1.
 * The first element becomes the last one.
 * @param stacks The stacks of push_swap
 */
void	silent_rb(t_push_swap_stacks *stacks);

/**
 * @brief Rotate the stack a and b
 * @param stacks The stacks of push_swap
 */
void	silent_rr(t_push_swap_stacks *stacks);

/**
 * @brief Shift down all elements of stack a by 1.
 * The last element becomes the first one
 * @param stacks The stacks of push_swap
 */
void	silent_rra(t_push_swap_stacks *stacks);

/**
 * @brief Shift down all elements of stack b by 1.
 * The last element becomes the first one.
 * @param stacks The stacks of push_swap
 */
void	silent_rrb(t_push_swap_stacks *stacks);

/**
 * @brief Reverse rotate the stack a and b
 * @param stacks The stacks of push_swap
 */
void	silent_rrr(t_push_swap_stacks *stacks);

#endif // PUSH_SWAP_SILENT_H
