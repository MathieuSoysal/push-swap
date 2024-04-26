/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:47:51 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/26 18:58:53 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_H
# define LINKED_LIST_H

# include "../node.h"
# include <unistd.h>

typedef struct linked_list
{
	struct node	*head;
}				t_linked_list;

/**
 * @brief Create a new linked list
 * @return The new linked list
 */
t_linked_list	*linked_list_create(void);

/**
 * @brief Add a node at the head of the linked list
 * @param obj The linked list to add the node
 * @param new_node The node to add
 */
void			linked_list_add(t_linked_list *obj, t_node *new_node);

/**
 * @brief Free the linked list and its content
 * @param obj The linked list to free
 * @param free_content The function to free the content of the linked list,
	can be NULL if the content is in stack
 */
void			linked_list_free(t_linked_list *obj,
					void (*free_content)(void *));

/**
 * @brief Return the first element of the linked list
 */
t_node			*linked_list_peak(t_linked_list *obj);

/**
 * @brief Remove and return the first element of the linked list
 */
t_node			*linked_list_pop(t_linked_list *obj);

#endif // LINKED_LIST_H
