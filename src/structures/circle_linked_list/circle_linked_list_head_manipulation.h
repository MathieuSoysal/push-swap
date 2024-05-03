/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_linked_list_head_manipulation.h             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:15:35 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/03 13:51:22 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CIRCLE_LINKED_LIST_HEAD_MANIPULATION_H
# define CIRCLE_LINKED_LIST_HEAD_MANIPULATION_H

# include "circle_linked_list_essentials.h"

/**
 * @brief Add a new node at the first of the linked list
 * @param list The linked list
 * @param content The content of the new node
 * @return 0 if the node is added, -1 if malloc failed
 */
int		circle_linked_list_add_first(t_circle_linked_list *list, void *content);

/**
 * @brief Get the content of the first element of the linked list
 * @param list The linked list
 * @return The content of the first element of the linked list
 */
void	*circle_linked_list_peak_first(t_circle_linked_list *list);

/**
 * @brief Remove the first element of the linked list
 * @param list The linked list
 * @param free_content The function to free the content of the linked list,
 * can be NULL if the content is in stack
 */
void	circle_linked_list_remove_first(t_circle_linked_list *list,
			void (*free_content)(void *));

/**
 * @brief Remove the first element of the linked list and return its content
 * @param list The linked list
 */
void	*circle_linked_list_pop_first(t_circle_linked_list *list);

#endif // CIRCLE_LINKED_LIST_HEAD_MANIPULATION_H
