/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 04:08:45 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/11 04:40:20 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "calculator.h"

int	push_swap_calculate_push_swap_moves(t_stack *stack, int num)
{
	int		moves;
	t_node	*node;

	moves = 0;
	node = stack->head;
	while (node)
	{
		if (*(int *)node->content > num)
			break ;
		node = node->next;
		moves++;
	}
	if (moves > stack->size - moves)
		moves = (stack->size - moves) * -1;
	return (moves);
}
