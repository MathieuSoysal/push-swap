/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_essantials.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:22:37 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/29 01:23:18 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_stack.h"

void	push_swap_stacks_free(t_push_swap_stacks *stacks)
{
	circle_linked_list_free(stacks->a, free);
	circle_linked_list_free(stacks->b, free);
	free(stacks);
}
