/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turkish_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 02:21:22 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/19 11:47:40 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calculator.h"
#include "founder.h"
#include "push_swap_sorter.h"
#include "rotate_optimiser.h"
#include "turkish_sort.h"

static void	interpret_moves_without_opti(t_push_swap_stacks *stacks,
		void rotate(t_push_swap_stacks *stacks),
		void reverse_rotate(t_push_swap_stacks *stacks), int moves)
{
	while (moves > 0)
	{
		rotate(stacks);
		moves--;
	}
	while (moves < 0)
	{
		reverse_rotate(stacks);
		moves++;
	}
}

static void	interpret_moves(t_push_swap_stacks *stacks, int moves_in_a,
		int moves_in_b)
{
	while (moves_in_a > 0 && moves_in_b > 0)
	{
		rr(stacks);
		moves_in_a--;
		moves_in_b--;
	}
	while (moves_in_a < 0 && moves_in_b < 0)
	{
		rrr(stacks);
		moves_in_a++;
		moves_in_b++;
	}
	interpret_moves_without_opti(stacks, ra, rra, moves_in_a);
	interpret_moves_without_opti(stacks, rb, rrb, moves_in_b);
}

static void	push_swap_sort_turkish1(t_push_swap_stacks *stacks)
{
	int	moves_in_a;
	int	moves_in_b;

	while (stacks->a->size > 3)
	{
		moves_in_b = 0;
		push_swap_calculate_best_moves(stacks, &moves_in_a, &moves_in_b);
		interpret_moves(stacks, moves_in_a, moves_in_b);
		pb(stacks);
	}
	while (stacks->b->size > 0)
	{
		push_swap_sort_three(stacks);
		moves_in_a = get_moves_to_put_first_element_from_b_to_a(stacks);
		interpret_moves(stacks, moves_in_a, 0);
		pa(stacks);
	}
	interpret_moves(stacks, push_swap_stack_find_min_index(stacks->a), 0); // ICIu
}

void	push_swap_sort_turkish(t_push_swap_stacks *stacks)
{
	pb(stacks);
	pb(stacks);
	push_swap_sort_turkish1(stacks);
}
