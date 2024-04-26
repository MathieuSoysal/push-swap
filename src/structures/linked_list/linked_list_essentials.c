/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_essentials.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:29:06 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/26 19:33:48 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list_with_node.h"

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