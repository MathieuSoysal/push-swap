
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

void	test_turkish(void)
{
	int					tab[] = {1, 0, 3, 4, 5, 6, 7, 8, 13, 10};
	int					tab1[] = {1, 0, 3, 4, 5, 99, 5959, 666, 13, 48488};
	int					tab2[] = {1111, 170170, 2222, 3333, 5555, 6666, 180180,
							100100, 8888, 110110, 120120, 4444, 130130, 140140,
							7777, 150150, 160160, 9999};
	int					tab4[] = {1111, -170170, 2222, 3333, 5555, 6666, 180180,
							100100, 8888, 110110, -120120, 4444, -130130,
							140140, 7777, 150150, -160160, 9999};
	t_push_swap_stacks	*stacks;
	int					index;
	int					score;

	stacks = push_swap_stacks_create(tab, 10);
	push_swap_sort(stacks);
	TEST_CHECK(push_swap_stacks_is_finished(stacks) == 1);
	push_swap_stacks_free(stacks);
	//
	stacks = push_swap_stacks_create(tab1, 10);
	push_swap_sort(stacks);
	TEST_CHECK(push_swap_stacks_is_finished(stacks) == 1);
	push_swap_stacks_free(stacks);
	//
	stacks = push_swap_stacks_create(tab2, 18);
	push_swap_sort(stacks);
	TEST_CHECK(push_swap_stacks_is_finished(stacks) == 1);
	push_swap_stacks_free(stacks);
	//
	stacks = push_swap_stacks_create(tab4, 18);
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
	test_turkish();
}

#endif // TEST_PUSH_SWAP_SORTER_H
