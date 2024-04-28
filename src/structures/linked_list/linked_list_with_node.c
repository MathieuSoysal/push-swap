/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_with_node.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:54:43 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/28 19:23:27 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list_with_node.h"
#include <stdlib.h>

void	linked_list_add_node(t_linked_list *obj, t_node *new_node)
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

t_node	*linked_list_peak_node(t_linked_list *obj)
{
	return (obj->head);
}

t_node	*linked_list_pop_node(t_linked_list *obj)
{
	t_node	*temp;

	if (obj->head == NULL)
		return (NULL);
	temp = obj->head;
	obj->head = obj->head->next;
	return (temp);
}
