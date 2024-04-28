/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_linked_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 23:55:43 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/29 00:44:09 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circle_linked_list.h"

void	circle_linked_list_rotate(t_circle_linked_list *list,
		enum e_circle_linked_direction direction, int steps)
{
	if (list->head == NULL || steps == 0)
		return ;
	steps %= list->size;
	list->head->prev = list->tail;
	list->tail->next = list->head;
	if (direction == TAIL_TO_HEAD)
		while (steps--)
			list->head = list->head->next;
	else
		while (steps--)
			list->head = list->head->prev;
	list->tail = list->head->prev;
	list->head->prev = NULL;
	list->tail->next = NULL;
}
