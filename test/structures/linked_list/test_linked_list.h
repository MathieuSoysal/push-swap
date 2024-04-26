
#ifndef TEST_LINKED_LIST_H
# define TEST_LINKED_LIST_H

# include "../../acutest.h"
# include "linked_list.h"
# include <stdio.h>

void	test_linked_list_create(void)
{
	t_linked_list	*list;

	list = linked_list_create();
	TEST_CHECK(list != NULL);
	linked_list_free(list, free);
}

void	test_linked_list_add_with_null(void)
{
	t_linked_list	*list;
	t_node			*node;
	int				data;

	list = linked_list_create();
	node = node_create(NULL);
	linked_list_add(list, node);
	TEST_CHECK(list->head == node);
	linked_list_free(list, free);
}

void	test_linked_list_add(void)
{
	t_linked_list	*list;
	t_node			*node;
	int				*data;

	data = (int *)malloc(sizeof(int));
	list = linked_list_create();
	node = node_create(data);
	linked_list_add(list, node);
	TEST_CHECK(list->head == node);
	linked_list_free(list, free);
}

void	test_linked_list_peak(void)
{
	t_linked_list	*list;
	t_node			*node;
	int				*data;

	data = (int *)malloc(sizeof(int));
	list = linked_list_create();
	node = node_create(data);
	linked_list_add(list, node);
	TEST_CHECK(linked_list_peak(list) == node);
	linked_list_free(list, free);
}

void	test_linked_list_pop(void)
{
	t_linked_list	*list;
	t_node			*node;
	int				*data;

	data = (int *)malloc(sizeof(int));
	list = linked_list_create();
	node = node_create(data);
	linked_list_add(list, node);
	TEST_CHECK(linked_list_pop(list) == node);
	TEST_CHECK(linked_list_peak(list) == NULL);
	linked_list_free(list, free);
}

void test_linked_list_pop_empty(void)
{
	t_linked_list	*list;
	t_node			*node;

	list = linked_list_create();
	TEST_CHECK(linked_list_pop(list) == NULL);
	TEST_CHECK(linked_list_peak(list) == NULL);
	linked_list_free(list, free);
}

void	test_linked_list(void)
{
	test_linked_list_create();
	test_linked_list_add_with_null();
	test_linked_list_add();
	test_linked_list_peak();
	test_linked_list_pop();
}

#endif // TEST_LINKED_LIST_H
