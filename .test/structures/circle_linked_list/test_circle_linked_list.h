
#ifndef TEST_CIRCLE_LINKED_LIST_H
# define TEST_CIRCLE_LINKED_LIST_H

# include "../../acutest.h"
# include "circle_linked_list.h"
# include <stdio.h>

void	test_circle_linked_list_rotate_by_0(void)
{
	t_circle_linked_list	*list;
	int						*content;

	list = circle_linked_list_create();
	for (int i = 0; i < 10; i++)
	{
		content = malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(list, content);
	}
	circle_linked_list_rotate(list, TAIL_TO_HEAD, 0);
	TEST_CHECK(*(int *)list->head->content == 0);
	circle_linked_list_free(list, free);
}

void	test_circle_linked_list_rotate_by_1(void)
{
	t_circle_linked_list	*list;
	int						*content;

	list = circle_linked_list_create();
	for (int i = 0; i < 10; i++)
	{
		content = malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(list, content);
	}
	TEST_CHECK(*(int *)list->head->content == 0);
	TEST_CHECK(*(int *)list->tail->content == 9);
	circle_linked_list_rotate(list, TAIL_TO_HEAD, 1);
	TEST_CHECK(*(int *)list->head->content == 1);
	TEST_CHECK(*(int *)list->tail->content == 0);
	circle_linked_list_free(list, free);
}

void	test_circle_linked_list_rotate_by_2(void)
{
	t_circle_linked_list	*list;
	int						*content;

	list = circle_linked_list_create();
	for (int i = 0; i < 10; i++)
	{
		content = malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(list, content);
	}
	TEST_CHECK(*(int *)list->head->content == 0);
	TEST_CHECK(*(int *)list->tail->content == 9);
	circle_linked_list_rotate(list, TAIL_TO_HEAD, 10);
	TEST_CHECK(*(int *)list->head->content == 0);
	TEST_CHECK(*(int *)list->tail->content == 9);
	circle_linked_list_free(list, free);
}

void	test_circle_linked_list_rotate_by_3(void)
{
	t_circle_linked_list	*list;
	int						*content;

	list = circle_linked_list_create();
	for (int i = 0; i < 10; i++)
	{
		content = malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(list, content);
	}
	TEST_CHECK(*(int *)list->head->content == 0);
	TEST_CHECK(*(int *)list->tail->content == 9);
	circle_linked_list_rotate(list, TAIL_TO_HEAD, 3);
	TEST_CHECK(*(int *)list->head->content == 3);
	TEST_CHECK(*(int *)list->tail->content == 2);
	circle_linked_list_free(list, free);
}

void	test_circle_linked_list_rotate_to_tail_by_1(void)
{
	t_circle_linked_list	*list;
	int						*content;

	list = circle_linked_list_create();
	for (int i = 0; i < 10; i++)
	{
		content = malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(list, content);
	}
	TEST_CHECK(*(int *)list->head->content == 0);
	TEST_CHECK(*(int *)list->tail->content == 9);
	circle_linked_list_rotate(list, HEAD_TO_TAIL, 1);
	TEST_CHECK(*(int *)list->head->content == 9);
	TEST_CHECK(*(int *)list->tail->content == 8);
	circle_linked_list_free(list, free);
}

void	test_circle_linked_list_rotate_to_tail_by_2(void)
{
	t_circle_linked_list	*list;
	int						*content;

	list = circle_linked_list_create();
	for (int i = 0; i < 10; i++)
	{
		content = malloc(sizeof(int));
		*content = i;
		circle_linked_list_add_last(list, content);
	}
	TEST_CHECK(*(int *)list->head->content == 0);
	TEST_CHECK(*(int *)list->tail->content == 9);
	circle_linked_list_rotate(list, HEAD_TO_TAIL, 2);
	TEST_CHECK(*(int *)list->head->content == 8);
	TEST_CHECK(*(int *)list->tail->content == 7);
	circle_linked_list_free(list, free);
}

void	test_circle_linked_list(void)
{
	test_circle_linked_list_rotate_by_0();
	test_circle_linked_list_rotate_by_1();
	test_circle_linked_list_rotate_by_2();
	test_circle_linked_list_rotate_by_3();
	test_circle_linked_list_rotate_to_tail_by_1();
	test_circle_linked_list_rotate_to_tail_by_2();
}

#endif // TEST_CIRCLE_LINKED_LIST_H
