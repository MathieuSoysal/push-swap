
#ifndef TEST_CALCULATOR_H
# define TEST_CALCULATOR_H

# include "../../acutest.h"
# include "calculator.h"
# include "push_swap_sorter.h"
# include <limits.h>
# include <stdio.h>

void	test_push_swap_calculate_best_index(void)
{
	int					tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	t_stack				*stack;
	t_push_swap_stacks	*stacks;
	int					index;
	int					score;
	int					tab2[] = {2, 5, 7, 1, 6, 3, 9, 4, 8};

	//
	stacks = push_swap_stacks_create(tab2, 9);
	pb(stacks);
	pb(stacks);
	pb(stacks);
	pb(stacks); // a : 6 3 9 4 8 | b : 2 5 7 1
	push_swap_calculate_best_index(stacks, &index, &score);
	TEST_CHECK(index == 0);
	TEST_CHECK(score == 2);
	push_swap_stacks_free(stacks);
}

void	test_calculator(void)
{
	int					tab[] = {18, 13, 12, 11, 9, 8, 7, 6, 4, 3, 2};
	t_stack				*stack;
	t_push_swap_stacks	*stacks;
	int					moves;
	test_push_swap_calculate_best_index();

	stacks = push_swap_stacks_create(tab, 11);
	stack = stacks->a;
	moves = push_swap_calculate_push_swap_moves(stack, 5);
	TEST_CHECK(moves == -3);
	push_swap_stacks_free(stacks);
	//
	stacks = push_swap_stacks_create(tab, 11);
	stack = stacks->a;
	moves = push_swap_calculate_push_swap_moves(stack, 1);
	TEST_CHECK(moves == 0);
	push_swap_stacks_free(stacks);
	//
	stacks = push_swap_stacks_create(tab, 11);
	stack = stacks->a;
	moves = push_swap_calculate_push_swap_moves(stack, 10);
	TEST_CHECK(moves == 4);
	push_swap_stacks_free(stacks);
	//
	stacks = push_swap_stacks_create(tab, 11);
	stack = stacks->a;
	moves = push_swap_calculate_push_swap_moves(stack, 30);
	TEST_CHECK(moves == 0);
	push_swap_stacks_free(stacks);
	//
	stacks = push_swap_stacks_create(tab, 11);
	stack = stacks->a;
	moves = push_swap_calculate_push_swap_moves(stack, 0);
	TEST_CHECK(moves == 0);
	push_swap_stacks_free(stacks);
	//
	int tab2[] = {1, 7, 5, 2};
	stacks = push_swap_stacks_create(tab2, 4);
	stack = stacks->a;
	moves = push_swap_calculate_push_swap_moves(stack, 6);
	TEST_CHECK(moves == 2);
	push_swap_stacks_free(stacks);
	
}

#endif // TEST_CALCULATOR_H
