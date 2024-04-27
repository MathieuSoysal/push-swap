/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_linked_list_essentials.h                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:08:22 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/27 18:21:18 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CIRCLE_LINKED_LIST_ESSENTIALS_H
# define CIRCLE_LINKED_LIST_ESSENTIALS_H

# include "../double_linked_list/double_linked_list_essentials.h"
# include <stdlib.h>

typedef t_double_linked_list	t_circle_linked_list;

t_circle_linked_list			*circle_linked_list_create(void);

void							circle_linked_list_free(
									t_circle_linked_list *list,
									void (*free_content)(void *));

#endif // CIRCLE_LINKED_LIST_ESSENTIALS_H
