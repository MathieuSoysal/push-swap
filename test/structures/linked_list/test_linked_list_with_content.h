
#ifndef TEST_LINKED_LIST_WITH_CONTENT_H
# define TEST_LINKED_LIST_WITH_CONTENT_H

# include "../../acutest.h"
# include "linked_list_with_content.h"
# include <stdio.h>

void	test_linked_list_with_content_add_with_null(void)
{
	t_linked_list	*list;
	int				data;

	list = linked_list_create();
	linked_list_add_content(list, NULL);
	TEST_CHECK(list->head != NULL);
	linked_list_free(list, free);
}

void	test_linked_list_with_content_add(void)
{
	t_linked_list	*list;
	int				*data;

	data = (int *)malloc(sizeof(int));
	list = linked_list_create();
	linked_list_add_content(list, data);
	TEST_CHECK(list->head->content == data);
	linked_list_free(list, free);
}

void	test_linked_list_with_content_peak(void)
{
	t_linked_list	*list;
	int				*data;

	data = (int *)malloc(sizeof(int));
	list = linked_list_create();
	linked_list_add_content(list, data);
	TEST_CHECK(linked_list_peak_content(list) == data);
	linked_list_free(list, free);
}

void	test_linked_list_with_content_pop(void)
{
	t_linked_list	*list;
	int				*data;

	data = (int *)malloc(sizeof(int));
	list = linked_list_create();
	linked_list_add_content(list, data);
	TEST_CHECK(linked_list_pop_content(list) == data);
	TEST_CHECK(linked_list_peak_content(list) == NULL);
	linked_list_free(list, free);
}

void	test_linked_list_with_content_pop_empty(void)
{
	t_linked_list	*list;

	list = linked_list_create();
	TEST_CHECK(linked_list_pop_content(list) == NULL);
	TEST_CHECK(linked_list_peak_content(list) == NULL);
	linked_list_free(list, free);
}

void	test_linked_list_with_content(void)
{
	test_linked_list_with_content_add_with_null();
	test_linked_list_with_content_add();
	test_linked_list_with_content_peak();
	test_linked_list_with_content_pop();
	test_linked_list_with_content_pop_empty();
}

#endif // TEST_LINKED_LIST_WITH_CONTENT_H
