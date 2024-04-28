/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_linked_list.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:49:21 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/29 00:15:00 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CIRCLE_LINKED_LIST_H
# define CIRCLE_LINKED_LIST_H

# include "circle_linked_list_essentials.h"
# include "circle_linked_list_head_manipulation.h"
# include "circle_linked_list_tail_manipulation.h"

enum	e_circle_linked_direction
{
	HEAD_TO_TAIL,
	TAIL_TO_HEAD
};

void	circle_linked_list_rotate(t_circle_linked_list *list,
			enum e_circle_linked_direction direction, int steps);

#endif // CIRCLE_LINKED_LIST_H
