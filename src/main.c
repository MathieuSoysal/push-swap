/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:23:44 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/20 09:46:09 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structures/push_swap_stack/push_swap_stack.h"
#include "utils/libft/libft.h"
#include "utils/parser/parser.h"
#include "utils/push_swap_sorter/push_swap_sorter.h"

int	main(int argc, char **argv)
{
	t_push_swap_stacks	*stacks;

	stacks = parse_to_push_swap_stacks(argc, argv);
	if (!stacks)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	push_swap_sort(stacks);
	push_swap_stacks_free(stacks);
	return (0);
}
