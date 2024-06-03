
#ifndef TEST_PUSH_SWAP_STACK_PUSHS_H
# define TEST_PUSH_SWAP_STACK_PUSHS_H

# include "../../acutest.h"
# include "push_swap_stack.h"
# include <stdio.h>

void	test_push_swap_stack_pushs(void)
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
	TEST_CHECK(stacks.b->size == 0);
	pb(&stacks);
	TEST_CHECK(*(int *)stacks.a->head->content == 1);
	TEST_CHECK(stacks.b->size == 1);
	TEST_CHECK(*(int *)stacks.b->head->content == 0);
	pa(&stacks);
	TEST_CHECK(*(int *)stacks.a->head->content == 0);
	TEST_CHECK(stacks.b->size == 0);
	pb(&stacks);
	TEST_CHECK(*(int *)stacks.a->head->content == 1);
	TEST_CHECK(stacks.b->size == 1);
	TEST_CHECK(*(int *)stacks.b->head->content == 0);
	pb(&stacks);
	TEST_CHECK(*(int *)stacks.a->head->content == 2);
	TEST_CHECK(stacks.b->size == 2);
	TEST_CHECK(*(int *)stacks.b->head->content == 1);
	circle_linked_list_free(stacks.a, free);
	circle_linked_list_free(stacks.b, free);
}

#endif // TEST_PUSH_SWAP_STACK_PUSHS_H
