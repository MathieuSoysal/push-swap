/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_linked_list_last_manipulation.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:25:48 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/03 13:52:22 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../double_linked_list/double_linked_list.h"
#include "circle_linked_list_tail_manipulation.h"

int	circle_linked_list_add_last(t_circle_linked_list *list, void *content)
{
	return (double_linked_list_add_last(list, content));
}

void	*circle_linked_list_peak_last(t_circle_linked_list *list)
{
	return (double_linked_list_peak_last(list));
}

void	circle_linked_list_remove_last(t_circle_linked_list *list,
		void (*free_content)(void *))
{
	double_linked_list_remove_last(list, free_content);
}

void	*circle_linked_list_pop_last(t_circle_linked_list *list)
{
	return (double_linked_list_pop_last(list));
}
