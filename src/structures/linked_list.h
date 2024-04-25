/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:47:51 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/25 22:29:41 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_H
# define LINKED_LIST_H

# include "node.h"
# include <unistd.h>

typedef struct linked_list
{
	struct node	*head;
}				t_linked_list;

t_linked_list	*linked_list_create(void);
t_node			*linked_list_get(t_linked_list *obj, int index);
void			linked_list_add_at_head(t_linked_list *obj, t_node *new_node);
void			linked_list_add_at_tail(t_linked_list *obj, t_node *new_node);
void			linked_list_add_at_index(t_linked_list *obj, int index,
					t_node *new_node);
void			linked_list_delete_at_index(t_linked_list *obj, int index,
					void (*free_content)(void *));
void			linked_list_free(t_linked_list *obj,
					void (*free_content)(void *));

#endif // LINKED_LIST_H
