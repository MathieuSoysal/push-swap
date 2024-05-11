/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:40:21 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/11 07:17:45 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL && del != NULL)
	{
		del(lst->content);
		free(lst);
	}
}
/*
void	test1(void)
{
	char	*tab;
	char	*tab2;
	t_list	*new;
	t_list	*new2;
	t_list	**head;

	tab2 = malloc(2);
	tab = malloc(2);
	tab[0] = '1';
	tab[1] = '\0';
	tab2[0] = '1';
	tab2[1] = '\0';
	new = ft_lstnew(tab);
	new2 = ft_lstnew(tab2);
	head = &new;
	ft_lstadd_back(head, new2);
	ft_lstdelone(ft_lstlast(*head), free);
	printf("%s should be %s\n", ft_lstlast(*head)->content, NULL);
}

int	main(void)
{
	test1();
	return (0);
}
 */