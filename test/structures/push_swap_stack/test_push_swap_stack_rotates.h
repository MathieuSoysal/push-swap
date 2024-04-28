
#ifndef TEST_PUSH_SWAP_STACK_ROTATES_H
# define TEST_PUSH_SWAP_STACK_ROTATES_H

# include "../../acutest.h"
# include "push_swap_stack.h"
# include <stdio.h>

void	test_ra(void)
{
	t_push_swap_stacks	stacks;
	int					*content;

	stacks.a = circle_linked_list_create();
	stacks.b = circle_linked_list_create();
	ra(&stacks);
	for (int i = 0; i < 10; i++)
	{
		content = (int *)malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(stacks.a, content);
	}
	TEST_CHECK(*(int *)stacks.a->head->content == 0);
	TEST_CHECK(*(int *)stacks.a->head->next->content == 1);
	ra(&stacks);
	TEST_CHECK(*(int *)stacks.a->head->content == 1);
	TEST_CHECK(*(int *)stacks.a->head->next->content == 2);
	ra(&stacks);
	TEST_CHECK(*(int *)stacks.a->head->content == 2);
	TEST_CHECK(*(int *)stacks.a->head->next->content == 3);
	ra(&stacks);
	TEST_CHECK(*(int *)stacks.a->head->content == 3);
	TEST_CHECK(*(int *)stacks.a->head->next->content == 4);
	circle_linked_list_free(stacks.a, free);
	circle_linked_list_free(stacks.b, free);
}

void	test_rb(void)
{
	t_push_swap_stacks	stacks;
	int					*content;

	stacks.a = circle_linked_list_create();
	stacks.b = circle_linked_list_create();
	rb(&stacks);
	for (int i = 0; i < 10; i++)
	{
		content = (int *)malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(stacks.b, content);
	}
	TEST_CHECK(*(int *)stacks.b->head->content == 0);
	TEST_CHECK(*(int *)stacks.b->head->next->content == 1);
	rb(&stacks);
	TEST_CHECK(*(int *)stacks.b->head->content == 1);
	TEST_CHECK(*(int *)stacks.b->head->next->content == 2);
	rb(&stacks);
	TEST_CHECK(*(int *)stacks.b->head->content == 2);
	TEST_CHECK(*(int *)stacks.b->head->next->content == 3);
	rb(&stacks);
	TEST_CHECK(*(int *)stacks.b->head->content == 3);
	TEST_CHECK(*(int *)stacks.b->head->next->content == 4);
	circle_linked_list_free(stacks.a, free);
	circle_linked_list_free(stacks.b, free);
}

void	test_rra(void)
{
	t_push_swap_stacks	stacks;
	int					*content;

	stacks.a = circle_linked_list_create();
	stacks.b = circle_linked_list_create();
	rra(&stacks);
	for (int i = 0; i < 10; i++)
	{
		content = (int *)malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(stacks.a, content);
	}
	TEST_CHECK(*(int *)stacks.a->head->content == 0);
	TEST_CHECK(*(int *)stacks.a->head->next->content == 1);
	rra(&stacks);
	TEST_CHECK(*(int *)stacks.a->head->content == 9);
	TEST_CHECK(*(int *)stacks.a->head->next->content == 0);
	rra(&stacks);
	TEST_CHECK(*(int *)stacks.a->head->content == 8);
	TEST_CHECK(*(int *)stacks.a->head->next->content == 9);
	rra(&stacks);
	TEST_CHECK(*(int *)stacks.a->head->content == 7);
	TEST_CHECK(*(int *)stacks.a->head->next->content == 8);
	circle_linked_list_free(stacks.a, free);
	circle_linked_list_free(stacks.b, free);
}

void	test_rrb(void)
{
	t_push_swap_stacks	stacks;
	int					*content;

	stacks.a = circle_linked_list_create();
	stacks.b = circle_linked_list_create();
	rrb(&stacks);
	for (int i = 0; i < 10; i++)
	{
		content = (int *)malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(stacks.b, content);
	}
	TEST_CHECK(*(int *)stacks.b->head->content == 0);
	TEST_CHECK(*(int *)stacks.b->head->next->content == 1);
	rrb(&stacks);
	TEST_CHECK(*(int *)stacks.b->head->content == 9);
	TEST_CHECK(*(int *)stacks.b->head->next->content == 0);
	rrb(&stacks);
	TEST_CHECK(*(int *)stacks.b->head->content == 8);
	TEST_CHECK(*(int *)stacks.b->head->next->content == 9);
	rrb(&stacks);
	TEST_CHECK(*(int *)stacks.b->head->content == 7);
	TEST_CHECK(*(int *)stacks.b->head->next->content == 8);
	circle_linked_list_free(stacks.a, free);
	circle_linked_list_free(stacks.b, free);
}

void	test_push_swap_stack_rotates(void)
{
	test_ra();
	test_rb();
	test_rra();
	test_rrb();
}

#endif // TEST_PUSH_SWAP_STACK_ROTATES_H
