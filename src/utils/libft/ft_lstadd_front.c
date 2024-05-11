/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:56:21 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/11 00:38:25 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL)
	{
		if (*lst != NULL)
			new->next = *lst;
		*lst = new;
	}
}
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
	printf("%s should be %s\n", (*head)->content, tab);
	ft_lstadd_front(head, new2);
	printf("%s should be %s", (*head)->content, tab2);
	return (0);
}
 */