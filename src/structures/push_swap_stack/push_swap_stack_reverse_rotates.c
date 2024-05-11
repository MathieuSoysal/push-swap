/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_reverse_rotates.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:06:31 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/11 02:02:55 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_stack.h"

void	rra(t_push_swap_stacks *stacks)
{
	if (stacks->a->size < 2)
		return ;
	circle_linked_list_rotate(stacks->a, HEAD_TO_TAIL, 1);
}

void	rrb(t_push_swap_stacks *stacks)
{
	if (stacks->b->size < 2)
		return ;
	circle_linked_list_rotate(stacks->b, HEAD_TO_TAIL, 1);
}

// Utiliser un sorte de mini buffer check si avant on a fait un rra, le rrb va regarder si il y a un rra avant il appel un rrr, chaque fonction autre que des des rotates va reset le buffer

void	rrr(t_push_swap_stacks *stacks)
{
	rra(stacks);
	rrb(stacks);
}
