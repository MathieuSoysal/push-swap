/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_push_swap_stack_essentials.h                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:09:24 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/03 14:00:36 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_PUSH_SWAP_STACK_ESSENTIALS_H
#define TEST_PUSH_SWAP_STACK_ESSENTIALS_H

#include "../../acutest.h"
#include "push_swap_stack.h"
#include <stdio.h>

void test_create(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	t_push_swap_stacks *stacks = push_swap_stacks_create(tab, 5);
	t_stack *a = stacks->a;
	t_stack *b = stacks->b;

	TEST_ASSERT(b->size == 0);
	TEST_ASSERT(a->size == 5);

	for (size_t i = 0; i < 5; i++)
		TEST_CHECK(*(int *)circle_linked_list_pop_last(a) == tab[i]);
}

void test_push_swap_stack_essentials(void)
{
	test_create();
}

#endif // TEST_PUSH_SWAP_STACK_ESSENTIALS_H