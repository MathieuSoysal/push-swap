/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_essentials.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:34:59 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/26 19:36:21 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LINKED_LIST_ESSENTIALS_H
# define LINKED_LIST_ESSENTIALS_H

//# include <stdio.h>
//# include <unistd.h>

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
 * @brief Free the linked list and its content
 * @param obj The linked list to free
 * @param free_content The function to free the content of the linked list,
	can be NULL if the content is in stack
 */
void			linked_list_free(t_linked_list *obj,
					void (*free_content)(void *));

#endif // LINKED_LIST_ESSENTIALS_H
