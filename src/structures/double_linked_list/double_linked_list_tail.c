/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_linked_list_tail.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:24:39 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/27 14:28:42 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "double_linked_list.h"
#include <stdlib.h>

void	double_linked_list_add_last_content(t_double_linked_list *obj,
		void *new_content)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		return ;
	new_node->content = new_content;
	new_node->next = NULL;
	new_node->prev = obj->tail;
	if (obj->tail != NULL)
		obj->tail->next = new_node;
	obj->tail = new_node;
	if (obj->head == NULL)
		obj->head = new_node;
	obj->size++;
}

void	*double_linked_list_peak_last_content(t_double_linked_list *obj)
{
	if (obj->tail == NULL)
		return (NULL);
	return (obj->tail->content);
}

void	*double_linked_list_pop_last_content(t_double_linked_list *obj)
{
	t_node	*tail;
	void	*content;

	if (!obj->tail)
		return (NULL);
	tail = obj->tail;
	obj->tail = tail->prev;
	if (obj->tail)
		obj->tail->next = NULL;
	if (tail == obj->head)
		obj->head = NULL;
	content = tail->content;
	free(tail);
	obj->size--;
	return (content);
}

void	double_linked_list_remove_last(t_double_linked_list *obj,
		void (*free_content)(void *))
{
	t_node	*tail;

	if (!obj->tail)
		return ;
	tail = obj->tail;
	obj->tail = tail->prev;
	if (obj->tail)
		obj->tail->next = NULL;
	if (tail == obj->head)
		obj->head = NULL;
	if (free_content)
		free_content(tail->content);
	free(tail);
	obj->size--;
}
