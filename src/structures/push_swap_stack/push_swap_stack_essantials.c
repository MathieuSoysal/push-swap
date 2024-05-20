/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_essantials.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:22:37 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/20 09:48:30 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_stack.h"

void	push_swap_stacks_free(t_push_swap_stacks *stacks)
{
	if (stacks->a)
		circle_linked_list_free(stacks->a, free);
	if (stacks->b)
		circle_linked_list_free(stacks->b, free);
	free(stacks);
	stacks = NULL;
}

static t_push_swap_stacks	*push_swap_stacks_init(void)
{
	t_push_swap_stacks	*stacks;

	stacks = malloc(sizeof(t_push_swap_stacks));
	if (!stacks)
		return (NULL);
	stacks->a = circle_linked_list_create();
	stacks->b = circle_linked_list_create();
	if (!stacks->a || !stacks->b)
		return (push_swap_stacks_free(stacks), NULL);
	return (stacks);
}

t_push_swap_stacks	*push_swap_stacks_create(int *array, size_t size)
{
	t_push_swap_stacks	*stacks;
	int					*content;

	stacks = push_swap_stacks_init();
	if (!stacks)
		return (NULL);
	while (size--)
	{
		content = (int *)malloc(sizeof(int));
		if (!content)
			return (push_swap_stacks_free(stacks), NULL);
		*content = array[size];
		if (circle_linked_list_add_first(stacks->a,
				content) == -1)
			return (push_swap_stacks_free(stacks), NULL);
	}
	return (stacks);
}

int	push_swap_stacks_is_finished(t_push_swap_stacks *stacks)
{
	t_node	*node;

	if (stacks->b->size)
		return (0);
	if (stacks->a->size < 2)
		return (1);
	node = stacks->a->head;
	while (node != NULL && node->next != NULL)
	{
		if (*(int *)node->content > *(int *)node->next->content)
			return (0);
		node = node->next;
	}
	return (1);
}
