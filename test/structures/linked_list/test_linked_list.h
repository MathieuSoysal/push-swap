
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
	TEST_CHECK(list->head == NULL);
	linked_list_free(list, free);
}

void	test_linked_list_add_at_head_with_null(void)
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

void	test_linked_list_add_at_head(void)
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

void	test_linked_list_add_at_tail(void)
{
	t_linked_list	*list;
	t_node			*node;
	int				*data;

	data = (int *)malloc(sizeof(int));
	list = linked_list_create();
	node = node_create(data);
	linked_list_add_at_tail(list, node);
	TEST_CHECK(list->head == node);
	linked_list_free(list, free);
}

void	test_linked_list_add_at_index(void)
{
	t_linked_list	*list;
	t_node			*node;
	int				*data;

	data = (int *)malloc(sizeof(int));
	list = linked_list_create();
	node = node_create(data);
	linked_list_add_at_index(list, 0, node);
	TEST_CHECK(list->head == node);
	linked_list_free(list, free);
}

void	test_linked_list_delete_at_index(void)
{
	t_linked_list	*list;
	t_node			*node;
	int				*data;

	data = (int *)malloc(sizeof(int));
	list = linked_list_create();
	node = node_create(data);
	linked_list_add_at_index(list, 0, node);
	linked_list_delete_at_index(list, 0, free);
	TEST_CHECK(list->head == NULL);
	linked_list_free(list, free);
}

void	test_linked_list(void)
{
	test_linked_list_create();
	test_linked_list_add_at_head_with_null();
	test_linked_list_add_at_head();
	test_linked_list_add_at_tail();
	test_linked_list_add_at_index();
    test_linked_list_delete_at_index();
}

#endif // TEST_LINKED_LIST_H
