/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:11:30 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/11 07:21:24 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (lst != NULL)
	{
		while (*lst != NULL)
		{
			next = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = next;
		}
	}
}
// TODO: A corriger
/*
int	main(void)
{
	char	tab[] = {'1', '\0'};
	char	tab2[] = {'2', '\0'};
	t_list	*new;
	t_list	*new2;
	t_list	**head;

	new = ft_lstnew(tab);
	new2 = ft_lstnew(tab2);
	head = &new;
	ft_lstadd_back(head, new2);
	ft_lstclear(head, free);
	printf("%s should be %s\n", (*head)->content, NULL);
	return (0);
} */
