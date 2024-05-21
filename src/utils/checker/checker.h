/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:44:28 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/21 09:20:12 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../../structures/push_swap_stack/push_swap_stack.h"

enum		e_errors
{
	INVALID_COMMAND,
	GIVEN_STACKS_ARE_NOT_GOOD,
	NOT_SORTED,
	NO_ERROR
};

typedef enum e_errors	t_errors;

/**
 *  @brief  Function that intrepet give push_swap command
 * @param  stacks  The stacks structure
 * @param  line  The command line to interpret
 * @return 1 if the command is valid and it's welly interpreted,
	-1 if the command is invalid
 */
t_errors	checker_interpret_all_given_commands(t_push_swap_stacks *stacks);


#endif // CHECKER_H
