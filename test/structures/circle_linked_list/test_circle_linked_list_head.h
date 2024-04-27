
#ifndef TEST_CIRCLE_LINKED_LIST_HEAD_H
# define TEST_CIRCLE_LINKED_LIST_HEAD_H

# include "../../acutest.h"
# include "circle_linked_list_head_manipulation.h"
# include <stdio.h>

void	test_circle_linked_list_add_first1(void)
{
	t_circle_linked_list	*list;
	int						data;

	list = circle_linked_list_create();
	data = 42;
	circle_linked_list_add_first(list, &data);
	TEST_CHECK(list->head != NULL);
	circle_linked_list_free(list, NULL);
}

void	test_circle_linked_list_add_first2(void)
{
	t_circle_linked_list	*list;
	int						data;
	int						data2;

	list = circle_linked_list_create();
	data = 42;
	circle_linked_list_add_first(list, &data);
	TEST_CHECK(*(int *)list->head->content == 42);
	data2 = 21;
	circle_linked_list_add_first(list, &data2);
	TEST_CHECK(*(int *)list->head->content == 21);
	TEST_CHECK(*(int *)list->tail->content == 42);
	circle_linked_list_free(list, NULL);
}

void	test_circle_linked_list_peak_first_content1(void)
{
	t_circle_linked_list	*list;
	int						data;

	list = circle_linked_list_create();
	data = 42;
	circle_linked_list_add_first(list, &data);
	TEST_CHECK(*(int *)circle_linked_list_peak_first(list) == 42);
	circle_linked_list_free(list, NULL);
}

void	test_circle_linked_list_peak_first_content2(void)
{
	t_circle_linked_list	*list;
	int						data;
	int						data2;

	list = circle_linked_list_create();
	data = 42;
	circle_linked_list_add_first(list, &data);
	data2 = 21;
	circle_linked_list_add_first(list, &data2);
	TEST_CHECK(*(int *)circle_linked_list_peak_first(list) == 21);
	circle_linked_list_free(list, NULL);
}

void	test_circle_linked_list_pop_first_content1(void)
{
	t_circle_linked_list	*list;
	int						data;

	list = circle_linked_list_create();
	data = 42;
	circle_linked_list_add_first(list, &data);
	TEST_CHECK(*(int *)circle_linked_list_pop_first(list) == 42);
	TEST_CHECK(circle_linked_list_peak_first(list) == NULL);
	circle_linked_list_free(list, NULL);
}

void	test_circle_linked_list_pop_first_content2(void)
{
	t_circle_linked_list	*list;
	int						data;
	int						data2;

	list = circle_linked_list_create();
	data = 42;
	circle_linked_list_add_first(list, &data);
	data2 = 21;
	circle_linked_list_add_first(list, &data2);
	TEST_CHECK(*(int *)circle_linked_list_pop_first(list) == 21);
	TEST_CHECK(*(int *)circle_linked_list_peak_first(list) == 42);
	circle_linked_list_free(list, NULL);
}

void	test_circle_linked_list_remove_first1(void)
{
	t_circle_linked_list	*list;
	int						data;

	list = circle_linked_list_create();
	data = 42;
	circle_linked_list_add_first(list, &data);
	circle_linked_list_remove_first(list, NULL);
	TEST_CHECK(list->head == NULL);
	circle_linked_list_free(list, NULL);
}

void	test_circle_linked_list_remove_first2(void)
{
	t_circle_linked_list	*list;
	int						data;
	int						data2;

	list = circle_linked_list_create();
	data = 42;
	circle_linked_list_add_first(list, &data);
	data2 = 21;
	circle_linked_list_add_first(list, &data2);
	circle_linked_list_remove_first(list, NULL);
	TEST_CHECK(*(int *)list->head->content == 42);
	circle_linked_list_free(list, NULL);
}

void	test_circle_linked_list_head(void)
{
	test_circle_linked_list_add_first1();
	test_circle_linked_list_add_first2();
	test_circle_linked_list_peak_first_content1();
	test_circle_linked_list_peak_first_content2();
	test_circle_linked_list_pop_first_content1();
	test_circle_linked_list_pop_first_content2();
	test_circle_linked_list_remove_first1();
	test_circle_linked_list_remove_first2();
}

#endif // TEST_CIRCLE_LINKED_LIST_HEAD_H
