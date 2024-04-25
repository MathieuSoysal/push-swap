/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:54:43 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/25 22:30:16 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"
#include <stdlib.h>

void	linked_list_add_at_head(t_linked_list *obj, t_node *new_node)
{
	t_node	*temp;

	if (new_node == NULL)
		return ;
	if (obj->head == NULL)
		obj->head = new_node;
	else
	{
		temp = obj->head;
		obj->head = new_node;
		obj->head->next = temp;
	}
}

void	linked_list_add_at_tail(t_linked_list *obj, t_node *new_node)
{
	t_node	*current;

	current = obj->head;
	if (obj->head == NULL)
		linked_list_add_at_head(obj, new_node);
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
}

void	linked_list_add_at_index(t_linked_list *obj, int index,
		t_node *new_node)
{
	t_node	*current;

	current = obj->head;
	if (index == 0)
		linked_list_add_at_head(obj, new_node);
	else
	{
		if (current != NULL)
		{
			while (--index > 0)
			{
				if (current->next != NULL)
					current = current->next;
				else
					return ;
			}
			new_node->next = current->next;
			current->next = new_node;
		}
	}
}
