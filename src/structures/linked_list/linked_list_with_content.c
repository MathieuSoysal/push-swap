/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_with_content.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:38:27 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/26 19:42:13 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list_with_content.h"
#include "linked_list_with_node.h"

void	linked_list_add_content(t_linked_list *obj, void *new_content)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		return ;
	new_node->content = new_content;
	linked_list_add_node(obj, new_node);
}

void	*linked_list_peak_content(t_linked_list *obj)
{
	t_node	*node;

	node = linked_list_peak_node(obj);
	if (node == NULL)
		return (NULL);
	return (node->content);
}

void	*linked_list_pop_content(t_linked_list *obj)
{
	t_node	*node;
	void	*content;

	node = linked_list_pop_node(obj);
	if (node == NULL)
		return (NULL);
	content = node->content;
	free(node);
	return (content);
}
