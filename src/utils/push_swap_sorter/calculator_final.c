/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator_final.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 03:05:17 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/19 07:45:56 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../structures/push_swap_stack/push_swap_stack.h"
#include "../libft/libft.h"
#include "calculator.h"
#include <limits.h>

int	get_index_of_num(t_stack *stack, int num)
{
	t_node	*current;
	int		index;

	index = 0;
	current = stack->head;
	while (current)
	{
		if (*(int *)current->content == num)
			return (index);
		current = current->next;
		index++;
	}
	return (-1);
}

int	get_closest_num(t_push_swap_stacks *stacks, int num, int *closest_index)
{
	t_node	*current;
	int		closest_num;
	int		diff;
	int		i;

	i = 0;
	diff = INT_MAX;
	closest_num = 0;
	current = stacks->a->head;
	while (current)
	{
		if (ft_abs(*(int *)current->content - num) < diff)
		{
			diff = ft_abs(*(int *)current->content - num);
			closest_num = *(int *)current->content;
			*closest_index = i;
		}
		current = current->next;
		i++;
	}
	return (closest_num);
}

void	replace_num_in_tab(int tab[3], int num, int new_num)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if (tab[i] == num)
		{
			tab[i] = new_num;
			return ;
		}
		i++;
	}
}

int	get_moves_to_put_first_element_from_b_to_a(t_push_swap_stacks *stacks)
{
	int	index;
	int	closest_num;
	int	num_in_b;

	num_in_b = *(int *)stacks->b->head->content;
	index = 0;
	closest_num = get_closest_num(stacks, num_in_b, &index);
	if (closest_num < num_in_b)
		index = (index + 1) % stacks->a->size;
	if (index > ft_abs(index - stacks->a->size))
		return (index - stacks->a->size);
	return (index);
}
