/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpretor_chercker.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:10:47 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/21 09:20:02 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../structures/push_swap_stack/push_swap_stack.h"
#include "../libft/libft.h"
#include "../../structures/push_swap_stack/push_swap_silent.h"
#include "checker.h"

static t_errors	reverse_rotate(t_push_swap_stacks *stacks, char *line)
{
	if (line[2] == '\n' || line[3] != '\n')
		return (INVALID_COMMAND);
	else if (line[2] == 'a')
		silent_rra(stacks);
	else if (line[2] == 'b')
		silent_rrb(stacks);
	else if (line[2] == 'r')
		silent_rrr(stacks);
	else
		return (INVALID_COMMAND);
	return (NO_ERROR);
}

static t_errors	rotate(t_push_swap_stacks *stacks, char *line)
{
	if (line[1] == '\n' || line[2] != '\n')
		return (INVALID_COMMAND);
	else if (line[1] == 'a')
		silent_ra(stacks);
	else if (line[1] == 'b')
		silent_rb(stacks);
	else if (line[1] == 'r')
		silent_rr(stacks);
	else
		return (INVALID_COMMAND);
	return (NO_ERROR);
}

static t_errors	swap(t_push_swap_stacks *stacks, char *line)
{
	if (line[1] == '\n' || line[2] != '\n')
		return (INVALID_COMMAND);
	else if (line[1] == 'a')
		silent_sa(stacks);
	else if (line[1] == 'b')
		silent_sb(stacks);
	else if (line[1] == 's')
		silent_ss(stacks);
	else
		return (INVALID_COMMAND);
	return (NO_ERROR);
}

static t_errors	push(t_push_swap_stacks *stacks, char *line)
{
	if (line[1] == '\n' || line[2] != '\n')
		return (INVALID_COMMAND);
	else if (line[1] == 'a')
		silent_pa(stacks);
	else if (line[1] == 'b')
		silent_pb(stacks);
	else
		return (INVALID_COMMAND);
	return (NO_ERROR);
}

t_errors	checker_interpret_all_given_commands(t_push_swap_stacks *stacks)
{
	char		*line;
	t_errors	result;

	result = NO_ERROR;
	line = ft_get_next_line(0);
	while (line != NULL && result == NO_ERROR)
	{
		if (line[0] == 's')
			result = (swap(stacks, line));
		else if (line[0] == 'p')
			result = (push(stacks, line));
		else if (line[0] == 'r' && line[1] == 'r')
			result = (reverse_rotate(stacks, line));
		else if (line[0] == 'r')
			result = (rotate(stacks, line));
		else
			result = INVALID_COMMAND;
		free(line);
		line = NULL;
		if (result == NO_ERROR)
			line = ft_get_next_line(0);
	}
	if (line != NULL)
		free(line);
	return (result);
}
