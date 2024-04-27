/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_linked_list_essentials.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:20:45 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/27 19:12:55 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circle_linked_list_essentials.h"

t_circle_linked_list	*circle_linked_list_create(void)
{
	return (double_linked_list_create());
}

void	circle_linked_list_free(t_circle_linked_list *list,
		void (*free_content)(void *))
{
	if (list->tail != NULL)
		list->tail->next = NULL;
	double_linked_list_free(list, free_content);
}
