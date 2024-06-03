/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_parser.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 11:52:58 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/20 08:31:35 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_PARSER_H
# define TEST_PARSER_H

# include "../../acutest.h"
# include "parser.h"
# include <limits.h>
# include <stdio.h>

void	test_parse_to_int_array(void)
{
	int	*array;
	int	size;

	array = parse_from_input_to_int_array(4, (char *[]){"./push_swap", "1", "2",
			"3"}, &size);
	TEST_CHECK(array[0] == 1);
	TEST_CHECK(array[1] == 2);
	TEST_CHECK(array[2] == 3);
	free(array);
	//
	array = parse_from_input_to_int_array(4, (char *[]){"./push_swap",
			"1     5 9 7    8   6  ", "2", "3"}, &size);
	TEST_CHECK(array[0] == 1);
	TEST_CHECK(array[1] == 5);
	TEST_CHECK(array[2] == 9);
	TEST_CHECK(array[3] == 7);
	TEST_CHECK(array[4] == 8);
	TEST_CHECK(array[5] == 6);
	TEST_CHECK(array[6] == 2);
	TEST_CHECK(array[7] == 3);
	free(array);
	//
	array = parse_from_input_to_int_array(4, (char *[]){"./push_swap",
			"1     5 9 7    8   6  ", "2", "3"}, &size);
	TEST_CHECK(array[0] == 1);
	TEST_CHECK(array[1] == 5);
	TEST_CHECK(array[2] == 9);
	TEST_CHECK(array[3] == 7);
	TEST_CHECK(array[4] == 8);
	TEST_CHECK(array[5] == 6);
	TEST_CHECK(array[6] == 2);
	TEST_CHECK(array[7] == 3);
	free(array);
	//
	array = parse_from_input_to_int_array(4, (char *[]){"./push_swap",
			"-1     5 9 7    -8   6  ", "2", "3"}, &size);
	TEST_CHECK(array[0] == -1);
	TEST_CHECK(array[1] == 5);
	TEST_CHECK(array[2] == 9);
	TEST_CHECK(array[3] == 7);
	TEST_CHECK(array[4] == -8);
	TEST_CHECK(array[5] == 6);
	TEST_CHECK(array[6] == 2);
	TEST_CHECK(array[7] == 3);
	free(array);
	//
	array = parse_from_input_to_int_array(4, (char *[]){"./push_swap",
			"-1     5 9 7s    -8   6  ", "2", "3"}, &size);
	TEST_CHECK(array == NULL);
}

#endif // TEST_PARSER_H
