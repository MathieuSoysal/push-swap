
#ifndef TEST_PUSH_SWAP_SORTER_H
# define TEST_PUSH_SWAP_SORTER_H

# include "../../acutest.h"
# include "push_swap_sorter.h"
# include <limits.h>
# include <stdio.h>

void	test_push_swap_sorter_already_sorted(void)
{
	int					tab[] = {INT_MIN, 2, 4, INT_MAX};
	t_push_swap_stacks	*stacks;

	stacks = push_swap_stacks_create(tab, 4);
	push_swap_sort(stacks);
	TEST_CHECK(push_swap_stacks_is_finished(stacks) == 1);
	push_swap_stacks_free(stacks);
}

void	test_push_swap_sorter_size_3_1(void)
{
	int					tab[] = {4, 2, 1};
	t_push_swap_stacks	*stacks;

	stacks = push_swap_stacks_create(tab, 3);
	push_swap_sort(stacks);
	TEST_CHECK(push_swap_stacks_is_finished(stacks) == 1);
	push_swap_stacks_free(stacks);
}

void	test_push_swap_sorter_size_3_2(void)
{
	int					tab[] = {2, 1, 4};
	t_push_swap_stacks	*stacks;

	stacks = push_swap_stacks_create(tab, 3);
	push_swap_sort(stacks);
	TEST_CHECK(push_swap_stacks_is_finished(stacks) == 1);
	push_swap_stacks_free(stacks);
}

void	test_push_swap_sorter_size_3_3(void)
{
	int					tab[] = {1, 4, 2};
	t_push_swap_stacks	*stacks;

	stacks = push_swap_stacks_create(tab, 3);
	push_swap_sort(stacks);
	TEST_CHECK(push_swap_stacks_is_finished(stacks) == 1);
	push_swap_stacks_free(stacks);
}

void	test_push_swap_sorter_size_3_4(void)
{
	int					tab[] = {2, 1, 4};
	t_push_swap_stacks	*stacks;

	stacks = push_swap_stacks_create(tab, 3);
	push_swap_sort(stacks);
	TEST_CHECK(push_swap_stacks_is_finished(stacks) == 1);
	push_swap_stacks_free(stacks);
}

void	test_push_swap_sorter_size_3_5(void)
{
	int					tab[] = {4, 1, 2};
	t_push_swap_stacks	*stacks;

	stacks = push_swap_stacks_create(tab, 3);
	push_swap_sort(stacks);
	TEST_CHECK(push_swap_stacks_is_finished(stacks) == 1);
	push_swap_stacks_free(stacks);
}

void	test_push_swap_sorter_size_3_6(void)
{
	int					tab[] = {2, 4, 1};
	t_push_swap_stacks	*stacks;

	stacks = push_swap_stacks_create(tab, 3);
	push_swap_sort(stacks);
	TEST_CHECK(push_swap_stacks_is_finished(stacks) == 1);
	push_swap_stacks_free(stacks);
}

void	test_push_swap_sorter_size_2(void)
{
	int					tab[] = {4, 1};
	t_push_swap_stacks	*stacks;

	stacks = push_swap_stacks_create(tab, 2);
	push_swap_sort(stacks);
	TEST_CHECK(push_swap_stacks_is_finished(stacks) == 1);
	push_swap_stacks_free(stacks);
}

void	test_push_swap_sorter(void)
{
	test_push_swap_sorter_already_sorted();
	test_push_swap_sorter_size_3_1();
	test_push_swap_sorter_size_3_2();
	test_push_swap_sorter_size_3_3();
	test_push_swap_sorter_size_3_4();
	test_push_swap_sorter_size_3_5();
	test_push_swap_sorter_size_3_6();
	test_push_swap_sorter_size_2();
}

#endif // TEST_PUSH_SWAP_SORTER_H
