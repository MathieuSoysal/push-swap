
#ifndef TEST_CALCULATOR_H
# define TEST_CALCULATOR_H

# include "../../acutest.h"
# include "calculator.h"
# include "push_swap_sorter.h"
# include <limits.h>
# include <stdio.h>

void	test_calculator(void)
{
	int					tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	t_stack				*stack;
	t_push_swap_stacks	*stacks;
	int					moves;

	stacks = push_swap_stacks_create(tab, 10);
	stack = stacks->a;
	moves = push_swap_calculate_push_swap_moves(stack, 5);
	TEST_CHECK(moves == 5);
	push_swap_stacks_free(stacks);

	stacks = push_swap_stacks_create(tab, 10);
	stack = stacks->a;
	moves = push_swap_calculate_push_swap_moves(stack, 1);
	TEST_CHECK(moves == 1);
	push_swap_stacks_free(stacks);

	stacks = push_swap_stacks_create(tab, 10);
	stack = stacks->a;
	moves = push_swap_calculate_push_swap_moves(stack, 10);
	TEST_CHECK(moves == 0);
	push_swap_stacks_free(stacks);

	stacks = push_swap_stacks_create(tab, 10);
	stack = stacks->a;
	moves = push_swap_calculate_push_swap_moves(stack, 11);
	TEST_CHECK(moves == 0);
	push_swap_stacks_free(stacks);

	stacks = push_swap_stacks_create(tab, 10);
	stack = stacks->a;
	moves = push_swap_calculate_push_swap_moves(stack, 0);
	TEST_CHECK(moves == 0);
	push_swap_stacks_free(stacks);
}

#endif // TEST_CALCULATOR_H
