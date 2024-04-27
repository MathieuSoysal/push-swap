/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_linked_list_head_manipulation.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:25:48 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/27 19:46:18 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../double_linked_list/double_linked_list.h"
#include "circle_linked_list_head_manipulation.h"

void	circle_linked_list_add_first(t_circle_linked_list *list, void *content)
{
	if (list->tail != NULL)
		list->tail->next = NULL;
	double_linked_list_add_first(list, content);
	list->head->prev = list->tail;
	list->tail->next = list->head;
}

void	*circle_linked_list_peak_first(t_circle_linked_list *list)
{
	return (double_linked_list_peak_first(list));
}

void	circle_linked_list_remove_first(t_circle_linked_list *list,
		void (*free_content)(void *))
{
	if (list->tail != NULL)
		list->tail->next = NULL;
	double_linked_list_remove_first(list, free_content);
	if (list->head != NULL)
	{
		list->head->prev = list->tail;
		list->tail->next = list->head;
	}
}

void	*circle_linked_list_pop_first(t_circle_linked_list *list)
{
	void	*content;

	if (list->tail != NULL)
		list->tail->next = NULL;
	content = double_linked_list_pop_first(list);
	if (list->size == 0)
		return (content);
	list->tail->next = list->head;
	list->head->prev = list->tail;
	return (content);
}
