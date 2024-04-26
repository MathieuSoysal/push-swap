/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_with_node.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:47:51 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/26 19:42:13 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_WITH_NODE_H
# define LINKED_LIST_WITH_NODE_H

# include "../node.h"
# include "linked_list_essentials.h"
# include <stdlib.h>
# include <unistd.h>

/**
 * @brief Add a node at the head of the linked list
 * @param obj The linked list to add the node
 * @param new_node The node to add
 */
void	linked_list_add_node(t_linked_list *obj, t_node *new_node);

/**
 * @brief Return the first element of the linked list
 * @return The first element of the linked list,
 * or NULL if the linked list is empty
 */
t_node	*linked_list_peak_node(t_linked_list *obj);

/**
 * @brief Remove and return the first element of the linked list
 * @return The first element of the linked list,
	or NULL if the linked list is empty
 */
t_node	*linked_list_pop_node(t_linked_list *obj);

#endif // LINKED_LIST_WITH_NODE_H
