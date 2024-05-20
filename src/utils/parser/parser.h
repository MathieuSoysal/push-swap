/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 11:50:02 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/20 08:37:28 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include "../../structures/push_swap_stack/push_swap_stack.h"

t_push_swap_stacks	*parse_to_push_swap_stacks(int argc, char **argv);

int					*parse_from_input_to_int_array(int argc, char **argv,
						int *size);

#endif // PARSER_H
