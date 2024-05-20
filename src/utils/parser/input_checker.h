/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checker.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 05:06:09 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/20 07:16:13 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_CHECKER_H
# define INPUT_CHECKER_H

# include <stdbool.h>

bool	is_valid_input(int argc, char **argv);

bool	is_valid_str(char *str);

bool	is_valid_int(int size, int *numbers, long long num, int index_num);

bool	is_valid_int_array(int size, int *numbers);

#endif // INPUT_CHECKER_H
