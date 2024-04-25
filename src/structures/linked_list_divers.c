/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_divers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:08:22 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/26 00:42:32 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"
#include <stdlib.h>

t_node	*linked_list_get(t_linked_list *obj, int index)
{
	t_node	*current;

	current = obj->head;
	while (index-- > 0 && current != NULL)
		current = current->next;
	return (current);
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

void	linked_list_delete_at_index(t_linked_list *obj, int index,
		void (*free_content)(void *))
{
	t_node	*current;
	t_node	*temp;

	current = obj->head;
	if (index == 0)
	{
		obj->head = current->next;
		free_content(current->content);
		free(current);
		return ;
	}
	while (--index > 0)
	{
		if (current->next == NULL)
			return ;
		current = current->next;
	}
	temp = current->next;
	current->next = temp->next;
	if (free_content != NULL)
		free_content(temp->content);
	free(temp);
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
