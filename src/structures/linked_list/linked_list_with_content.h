/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_with_content.h                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:37:11 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/26 19:41:07 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_WITH_CONTENT_H
# define LINKED_LIST_WITH_CONTENT_H

# include "linked_list_essentials.h"

/**
 * @brief Add a content at the head of the linked list
 * @param obj The linked list to add the content
 * @param new_content The content to add
 */
void	linked_list_add_content(t_linked_list *obj, void *new_content);

/**
 * @brief Return the first content of the linked list
 * @return The first content of the linked list,
 * or NULL if the linked list is empty
 */
void	*linked_list_peak_content(t_linked_list *obj);

/**
 * @brief Remove and return the first content of the linked list
 * @return The first content of the linked list,
	or NULL if the linked list is empty
 */
void	*linked_list_pop_content(t_linked_list *obj);

#endif // LINKED_LIST_WITH_CONTENT_H
