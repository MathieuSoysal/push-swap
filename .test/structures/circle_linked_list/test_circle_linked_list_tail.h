
#ifndef TEST_CIRCLE_LINKED_LIST_TAIL_H
# define TEST_CIRCLE_LINKED_LIST_TAIL_H

# include "../../acutest.h"
# include "circle_linked_list_tail_manipulation.h"
# include <stdio.h>

void	test_circle_linked_list_add_last1(void)
{
	t_circle_linked_list	*list;
	int						data;

	list = circle_linked_list_create();
	data = 42;
	circle_linked_list_add_last(list, &data);
	TEST_CHECK(list->tail != NULL);
	circle_linked_list_free(list, NULL);
}

void	test_circle_linked_list_add_last2(void)
{
	t_circle_linked_list	*list;
	int						data;
	int						data2;

	list = circle_linked_list_create();
	data = 42;
	circle_linked_list_add_last(list, &data);
	TEST_CHECK(*(int *)list->tail->content == 42);
	data2 = 21;
	circle_linked_list_add_last(list, &data2);
	TEST_CHECK(*(int *)list->tail->content == 21);
	TEST_CHECK(*(int *)list->head->content == 42);
	circle_linked_list_free(list, NULL);
}

void	test_circle_linked_list_peak_last_content1(void)
{
	t_circle_linked_list	*list;
	int						data;

	list = circle_linked_list_create();
	data = 42;
	circle_linked_list_add_last(list, &data);
	TEST_CHECK(*(int *)circle_linked_list_peak_last(list) == 42);
	circle_linked_list_free(list, NULL);
}

void	test_circle_linked_list_peak_last_content2(void)
{
	t_circle_linked_list	*list;
	int						data;
	int						data2;

	list = circle_linked_list_create();
	data = 42;
	circle_linked_list_add_last(list, &data);
	data2 = 21;
	circle_linked_list_add_last(list, &data2);
	TEST_CHECK(*(int *)circle_linked_list_peak_last(list) == 21);
	circle_linked_list_free(list, NULL);
}

void	test_circle_linked_list_pop_last_content1(void)
{
	t_circle_linked_list	*list;
	int						data;

	list = circle_linked_list_create();
	data = 42;
	circle_linked_list_add_last(list, &data);
	TEST_CHECK(*(int *)circle_linked_list_pop_last(list) == 42);
	TEST_CHECK(circle_linked_list_peak_last(list) == NULL);
	circle_linked_list_free(list, NULL);
}

void	test_circle_linked_list_pop_last_content2(void)
{
	t_circle_linked_list	*list;
	int						data;
	int						data2;

	list = circle_linked_list_create();
	data = 42;
	circle_linked_list_add_last(list, &data);
	data2 = 21;
	circle_linked_list_add_last(list, &data2);
	TEST_CHECK(*(int *)circle_linked_list_pop_last(list) == 21);
	TEST_CHECK(*(int *)circle_linked_list_peak_last(list) == 42);
	circle_linked_list_free(list, NULL);
}

void	test_circle_linked_list_remove_last1(void)
{
	t_circle_linked_list	*list;
	int						data;

	list = circle_linked_list_create();
	data = 42;
	circle_linked_list_add_last(list, &data);
	circle_linked_list_remove_last(list, NULL);
	TEST_CHECK(list->tail == NULL);
	circle_linked_list_free(list, NULL);
}

void	test_circle_linked_list_remove_last2(void)
{
	t_circle_linked_list	*list;
	int						data;
	int						data2;

	list = circle_linked_list_create();
	data = 42;
	circle_linked_list_add_last(list, &data);
	data2 = 21;
	circle_linked_list_add_last(list, &data2);
	circle_linked_list_remove_last(list, NULL);
	TEST_CHECK(*(int *)list->tail->content == 42);
	circle_linked_list_free(list, NULL);
}

void	test_circle_linked_list_tail(void)
{
	test_circle_linked_list_add_last1();
	test_circle_linked_list_add_last2();
	test_circle_linked_list_peak_last_content1();
	test_circle_linked_list_peak_last_content2();
	test_circle_linked_list_pop_last_content1();
	test_circle_linked_list_pop_last_content2();
	test_circle_linked_list_remove_last1();
	test_circle_linked_list_remove_last2();
}

#endif // TEST_CIRCLE_LINKED_LIST_TAIL_H
