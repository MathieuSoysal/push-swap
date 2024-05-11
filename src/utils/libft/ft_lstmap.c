/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:57:57 by hsoysal           #+#    #+#             */
/*   Updated: 2023/11/11 00:38:25 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**head_result;
	t_list	*result;
	t_list	*new;

	new = NULL;
	result = NULL;
	head_result = &result;
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(head_result, del);
			lst = NULL;
		}
		else
		{
			ft_lstadd_back(head_result, new);
			lst = lst->next;
		}
	}
	return (*head_result);
}
/* 
void	*my_function(void *s)
{
	char	*result;
	int		i;

	result = ft_strdup(s);
	i = -1;
	while (((char *)s)[++i])
		result[i] = ((char *)s)[i] + 1;
	return (result);
}

int	main(int argc, char const *argv[])
{
	char	tab[] = {'1', '\0'};
	char	tab2[] = {'2', '\0'};
	t_list	*new;
	t_list	*new2;
	t_list	**head;
	t_list	*new_head;

	new = ft_lstnew(tab);
	new2 = ft_lstnew(tab2);
	head = &new;
	ft_lstadd_back(head, new2);
	new_head = ft_lstmap(*head, my_function, free);
	printf("%s should be %s\n", (char *)(ft_lstlast(*head)->content), tab2);
	printf("%s should be %s\n", (char *)(ft_lstlast(new_head)->content), "3");
	printf("%s should be %s\n", (char *)(new_head->content), "2");
	return (0);
}
 */