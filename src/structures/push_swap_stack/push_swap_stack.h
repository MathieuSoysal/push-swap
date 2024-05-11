/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 00:51:51 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/11 02:20:54 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_STACK_H
# define PUSH_SWAP_STACK_H

# include "../circle_linked_list/circle_linked_list.h"

typedef t_circle_linked_list	t_stack;

typedef struct s_push_swap_stacks
{
	t_stack						*a;
	t_stack						*b;
}								t_push_swap_stacks;

/**
 * @brief Swap the first top two elements of the stack a
 * @param stacks The stacks of push_swap
 */
void							sa(t_push_swap_stacks *stacks);

/**
 * @brief Swap the first top two elements of the stack b
 * @param stacks The stacks of push_swap
 */
void							sb(t_push_swap_stacks *stacks);

/**
 * @brief Swap the first top two elements of the stack a and b
 * @param stacks The stacks of push_swap
 */
void							ss(t_push_swap_stacks *stacks);

/**
 * @brief Push the first top element of the stack a to the stack b
 * @param stacks The stacks of push_swap
 */
void							pa(t_push_swap_stacks *stacks);

/**
 * @brief Push the first top element of the stack b to the stack a
 * @param stacks The stacks of push_swap
 */
void							pb(t_push_swap_stacks *stacks);

/**
 * @brief Shift up all elements of stack a by 1.
 * The first element becomes the last one.
 * @param stacks The stacks of push_swap
 */
void							ra(t_push_swap_stacks *stacks);

/**
 * @brief Shift up all elements of stack b by 1.
 * The first element becomes the last one.
 * @param stacks The stacks of push_swap
 */
void							rb(t_push_swap_stacks *stacks);

/**
 * @brief Rotate the stack a and b
 * @param stacks The stacks of push_swap
 */
void							rr(t_push_swap_stacks *stacks);

/**
 * @brief Shift down all elements of stack a by 1.
 * The last element becomes the first one
 * @param stacks The stacks of push_swap
 */
void							rra(t_push_swap_stacks *stacks);

/**
 * @brief Shift down all elements of stack b by 1.
 * The last element becomes the first one.
 * @param stacks The stacks of push_swap
 */
void							rrb(t_push_swap_stacks *stacks);

/**
 * @brief Reverse rotate the stack a and b
 * @param stacks The stacks of push_swap
 */
void							rrr(t_push_swap_stacks *stacks);

/**
 * @brief free the stacks of push_swap
 * @param stacks The stacks of push_swap
 */
void							push_swap_stacks_free(t_push_swap_stacks *stacks);

/**
 * @brief Create the stacks of push_swap, from a list of integers,
 * the first integer is the top of the stack a, 
 * the last integer is the bottom of the stack a
 * @param array The list of integers should be in the stack a
 * @param size The size of the list of integers
 * @return The stacks of push_swap
 */
t_push_swap_stacks				*push_swap_stacks_create(int *array,
									size_t size);

/**
 * @brief Check if the stack a is sorted
 * @param stacks The stacks of push_swap
 */
int								push_swap_stacks_is_finished(t_push_swap_stacks *stacks);

#endif // PUSH_SWAP_STACK_H
