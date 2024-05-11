/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:50:58 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/12 14:06:02 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void	myfunction(char *str)
{
	printf("%s\n", str);
}

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
	ft_lstiter(*head, myfunction);
	return (0);
}
 */