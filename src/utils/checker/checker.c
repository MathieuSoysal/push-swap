/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:10:13 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/22 04:18:45 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../structures/push_swap_stack/push_swap_stack.h"
#include "../../utils/parser/parser.h"
#include "../libft/libft.h"
#include "checker.h"

int	main(int argc, char **argv)
{
	t_push_swap_stacks	*stacks;

	if (argc == 1)
		return (0);
	stacks = parse_to_push_swap_stacks(argc, argv);
	if (stacks == NULL)
		return (ft_putstr_fd("Error\n", 2), 1);
	if (checker_interpret_all_given_commands(stacks) != NO_ERROR)
		return (push_swap_stacks_free(stacks), ft_putstr_fd("Error\n", 2), 1);
	if (push_swap_stacks_is_finished(stacks) == 1 && stacks->b->size == 0)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	push_swap_stacks_free(stacks);
	return (0);
}
