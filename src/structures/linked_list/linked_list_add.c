/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:54:43 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/26 19:08:40 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"
#include <stdlib.h>

void	linked_list_add(t_linked_list *obj, t_node *new_node)
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

t_node	*linked_list_peak(t_linked_list *obj)
{
	return (obj->head);
}

t_node	*linked_list_pop(t_linked_list *obj)
{
	t_node	*temp;

	if (obj->head == NULL)
		return (NULL);
	temp = obj->head;
	obj->head = obj->head->next;
	return (temp);
}

t_linked_list	*linked_list_create(void)
{
	t_linked_list	*new_list;

	new_list = (t_linked_list *)malloc(sizeof(t_linked_list));
	if (new_list == NULL)
		return (NULL);
	new_list->head = NULL;
	return (new_list);
}

void	linked_list_free(t_linked_list *obj, void (*free_content)(void *))
{
	t_node	*current;
	t_node	*temp;

	current = obj->head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		if (free_content != NULL)
			free_content(temp->content);
		free(temp);
	}
	free(obj);
}
