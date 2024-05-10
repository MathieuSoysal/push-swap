/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   founder.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 01:26:28 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/11 01:35:07 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FOUNDER_H
# define FOUNDER_H

# include "../../structures/push_swap_stack/push_swap_stack.h"

/**
 * @brief Return the index of the smallest element in the stack
 * @param stack The stack to search
 */
int	push_swap_stack_find_min_index(t_stack *stack);

/**
 * @brief Return the index of the biggest element in the stack
 * @param stack The stack to search
 */
int	push_swap_stack_find_max_index(t_stack *stack);

#endif // FOUNDER_H
