/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_push_swap_stack_essentials.h                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:09:24 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/07 12:56:37 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_PUSH_SWAP_STACK_ESSENTIALS_H
# define TEST_PUSH_SWAP_STACK_ESSENTIALS_H

# include "../../acutest.h"
# include "push_swap_stack.h"
# include <stdio.h>

void	test_create(void)
{
	int					tab[] = {1, 2, 3, 4, 5};
	t_push_swap_stacks	*stacks;
	t_stack				*a;
	t_stack				*b;
	int					*content;

	stacks = push_swap_stacks_create(tab, 5);
	a = stacks->a;
	b = stacks->b;
	TEST_ASSERT(b->size == 0);
	TEST_ASSERT(a->size == 5);
	for (size_t i = 0; i < 5; i++)
	{
		content = (int *)circle_linked_list_pop_first(a);
		TEST_CHECK(*content == tab[i]);
		free(content);
	}
	push_swap_stacks_free(stacks);
}

void	test_is_finished(void)
{
	int					tab[] = {1, 2, 3, 4, 5};
	t_push_swap_stacks	*stacks;

	stacks = push_swap_stacks_create(tab, 5);
	TEST_CHECK(push_swap_stacks_is_finished(stacks) == 1);
	push_swap_stacks_free(stacks);
}

void	test_is_finished_2(void)
{
	int					tab[] = {1, 2, 5, 4, 5};
	t_push_swap_stacks	*stacks;

	stacks = push_swap_stacks_create(tab, 5);
	TEST_CHECK(push_swap_stacks_is_finished(stacks) == 0);
	push_swap_stacks_free(stacks);
}

void	test_push_swap_stack_essentials(void)
{
	test_create();
	test_is_finished();
	test_is_finished_2();
}

#endif // TEST_PUSH_SWAP_STACK_ESSENTIALS_H
