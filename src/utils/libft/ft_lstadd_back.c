/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:33:53 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/11 00:38:25 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst != NULL)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}
/* 
void	test1(void)
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
	printf("%s should be %s\n", ft_lstlast(*head)->content, tab2);
}

void	test2(void)
{
	char	tab2[] = {'2', '\0'};
	t_list	*new;
	t_list	*new2;
	t_list	**head;

	new = NULL;
	new2 = ft_lstnew(tab2);
	head = &new;
	ft_lstadd_back(head, new2);
	printf("%s should be %s\n", ft_lstlast(*head)->content, tab2);
}

int	main(void)
{
	test1();
	test2();
	return (0);
}
 */