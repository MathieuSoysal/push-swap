
#ifndef TEST_CIRCLE_LINKED_LIST_ESSENTIALS_H
# define TEST_CIRCLE_LINKED_LIST_ESSENTIALS_H

# include "../../acutest.h"
# include "circle_linked_list_essentials.h"
# include <stdio.h>

void	test_circle_linked_list_create(void)
{
	t_circle_linked_list	*list;

	list = circle_linked_list_create();
	TEST_CHECK(list != NULL);
	circle_linked_list_free(list, NULL);
}

void	test_circle_linked_list_free(void)
{
	t_circle_linked_list	*list;

	list = circle_linked_list_create();
	circle_linked_list_free(list, NULL);
	TEST_CHECK(1);
}

void	test_circle_linked_list_essentials(void)
{
	test_circle_linked_list_create();
	test_circle_linked_list_free();
}

#endif // TEST_CIRCLE_LINKED_LIST_ESSENTIALS_H
