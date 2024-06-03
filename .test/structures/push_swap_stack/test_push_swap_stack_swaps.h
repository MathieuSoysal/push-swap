
#ifndef TEST_PUSH_SWAP_STACK_SWAPS_H
# define TEST_PUSH_SWAP_STACK_SWAPS_H

# include "../../acutest.h"
# include "push_swap_stack.h"
# include <stdio.h>

void	test_sa(void)
{
	t_push_swap_stacks	stacks;
	int					*content;

	stacks.a = circle_linked_list_create();
	stacks.b = circle_linked_list_create();
	for (int i = 0; i < 10; i++)
	{
		content = (int *)malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(stacks.a, content);
	}
	TEST_CHECK(*(int *)stacks.a->head->content == 0);
	TEST_CHECK(*(int *)stacks.a->head->next->content == 1);
	sa(&stacks);
	TEST_CHECK(*(int *)stacks.a->head->content == 1);
	TEST_CHECK(*(int *)stacks.a->head->next->content == 0);
	circle_linked_list_free(stacks.a, free);
	circle_linked_list_free(stacks.b, free);
}

void	test_sa2(void)
{
	t_push_swap_stacks	stacks;
	int					*content;

	stacks.a = circle_linked_list_create();
	stacks.b = circle_linked_list_create();
	for (int i = 0; i < 1; i++)
	{
		content = (int *)malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(stacks.a, content);
	}
	TEST_CHECK(*(int *)stacks.a->head->content == 0);
	sa(&stacks);
	TEST_CHECK(*(int *)stacks.a->head->content == 0);
	circle_linked_list_free(stacks.a, free);
	circle_linked_list_free(stacks.b, free);
}

void	test_sb(void)
{
	t_push_swap_stacks	stacks;
	int					*content;

	stacks.a = circle_linked_list_create();
	stacks.b = circle_linked_list_create();
	for (int i = 0; i < 10; i++)
	{
		content = (int *)malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(stacks.b, content);
	}
	TEST_CHECK(*(int *)stacks.b->head->content == 0);
	TEST_CHECK(*(int *)stacks.b->head->next->content == 1);
	sb(&stacks);
	TEST_CHECK(*(int *)stacks.b->head->content == 1);
	TEST_CHECK(*(int *)stacks.b->head->next->content == 0);
	circle_linked_list_free(stacks.a, free);
	circle_linked_list_free(stacks.b, free);
}

void	test_sb2(void)
{
	t_push_swap_stacks	stacks;
	int					*content;

	stacks.a = circle_linked_list_create();
	stacks.b = circle_linked_list_create();
	for (int i = 0; i < 1; i++)
	{
		content = (int *)malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(stacks.b, content);
	}
	TEST_CHECK(*(int *)stacks.b->head->content == 0);
	sb(&stacks);
	TEST_CHECK(*(int *)stacks.b->head->content == 0);
	circle_linked_list_free(stacks.a, free);
	circle_linked_list_free(stacks.b, free);
}

void	test_ss(void)
{
	t_push_swap_stacks	stacks;
	int					*content;

	stacks.a = circle_linked_list_create();
	stacks.b = circle_linked_list_create();
	for (int i = 0; i < 10; i++)
	{
		content = (int *)malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(stacks.a, content);
		content = (int *)malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(stacks.b, content);
	}
	TEST_CHECK(*(int *)stacks.a->head->content == 0);
	TEST_CHECK(*(int *)stacks.a->head->next->content == 1);
	TEST_CHECK(*(int *)stacks.b->head->content == 0);
	TEST_CHECK(*(int *)stacks.b->head->next->content == 1);
	ss(&stacks);
	TEST_CHECK(*(int *)stacks.a->head->content == 1);
	TEST_CHECK(*(int *)stacks.a->head->next->content == 0);
	TEST_CHECK(*(int *)stacks.b->head->content == 1);
	TEST_CHECK(*(int *)stacks.b->head->next->content == 0);
	circle_linked_list_free(stacks.a, free);
	circle_linked_list_free(stacks.b, free);
}

void	test_ss2(void)
{
	t_push_swap_stacks	stacks;
	int					*content;

	stacks.a = circle_linked_list_create();
	stacks.b = circle_linked_list_create();
	for (int i = 0; i < 1; i++)
	{
		content = (int *)malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(stacks.a, content);
		content = (int *)malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(stacks.b, content);
	}
	TEST_CHECK(*(int *)stacks.a->head->content == 0);
	TEST_CHECK(*(int *)stacks.b->head->content == 0);
	ss(&stacks);
	TEST_CHECK(*(int *)stacks.a->head->content == 0);
	TEST_CHECK(*(int *)stacks.b->head->content == 0);
	circle_linked_list_free(stacks.a, free);
	circle_linked_list_free(stacks.b, free);
}

void	test_ss3(void)
{
	t_push_swap_stacks	stacks;
	int					*content;

	stacks.a = circle_linked_list_create();
	stacks.b = circle_linked_list_create();
	for (int i = 0; i < 3; i++)
	{
		content = (int *)malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(stacks.a, content);
	}
	TEST_CHECK(*(int *)stacks.a->head->content == 0);
	TEST_CHECK(*(int *)stacks.a->head->next->content == 1);
	TEST_CHECK(stacks.b->head == NULL);
	ss(&stacks);
	TEST_CHECK(*(int *)stacks.a->head->next->content == 0);
	TEST_CHECK(*(int *)stacks.a->head->content == 1);
	TEST_CHECK(stacks.b->head == NULL);
	circle_linked_list_free(stacks.a, free);
	circle_linked_list_free(stacks.b, free);
}

void	test_push_swap_stack_swaps(void)
{
	test_sa();
	test_sa2();
	test_sb();
	test_sb2();
	test_ss();
	test_ss2();
    test_ss3();
}

#endif // TEST_PUSH_SWAP_STACK_SWAPS_H
