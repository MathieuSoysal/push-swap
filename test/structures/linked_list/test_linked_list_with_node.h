
#ifndef TEST_LINKED_LIST_WITH_NODE_H
# define TEST_LINKED_LIST_WITH_NODE_H

# include "../../acutest.h"
# include "linked_list_with_node.h"
# include <stdio.h>

void	test_linked_list_with_node_create(void)
{
	t_linked_list	*list;

	list = linked_list_create();
	TEST_CHECK(list != NULL);
	linked_list_free(list, free);
}

void	test_linked_list_with_node_add_with_null(void)
{
	t_linked_list	*list;
	t_node			*node;
	int				data;

	list = linked_list_create();
	node = node_create(NULL);
	linked_list_add_node(list, node);
	TEST_CHECK(list->head == node);
	linked_list_free(list, free);
}

void	test_linked_list_with_node_add(void)
{
	t_linked_list	*list;
	t_node			*node;
	int				*data;

	data = (int *)malloc(sizeof(int));
	list = linked_list_create();
	node = node_create(data);
	linked_list_add_node(list, node);
	TEST_CHECK(list->head == node);
	linked_list_free(list, free);
}

void	test_linked_list_with_node_peak(void)
{
	t_linked_list	*list;
	t_node			*node;
	int				*data;

	data = (int *)malloc(sizeof(int));
	list = linked_list_create();
	node = node_create(data);
	linked_list_add_node(list, node);
	TEST_CHECK(linked_list_peak_node(list) == node);
	linked_list_free(list, free);
}

void	test_linked_list_with_node_pop(void)
{
	t_linked_list	*list;
	t_node			*node;
	int				*data;

	data = (int *)malloc(sizeof(int));
	list = linked_list_create();
	node = node_create(data);
	linked_list_add_node(list, node);
	TEST_CHECK(linked_list_pop_node(list) == node);
	TEST_CHECK(linked_list_peak_node(list) == NULL);
	linked_list_free(list, free);
}

void	test_linked_list_with_node_pop_empty(void)
{
	t_linked_list	*list;
	t_node			*node;

	list = linked_list_create();
	TEST_CHECK(linked_list_pop_node(list) == NULL);
	TEST_CHECK(linked_list_peak_node(list) == NULL);
	linked_list_free(list, free);
}

void	test_linked_list_with_node(void)
{
	test_linked_list_with_node_create();
	test_linked_list_with_node_add_with_null();
	test_linked_list_with_node_add();
	test_linked_list_with_node_peak();
	test_linked_list_with_node_pop();
	test_linked_list_with_node_pop_empty();
}

#endif // TEST_LINKED_LIST_WITH_NODE_H
