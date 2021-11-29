/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:08:09 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/19 20:08:12 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_lstmap is a function that iterates the list -lst- and applies the
	function -f- to the content of each element, and del if needed.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*result;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	head = ft_lstnew(f(lst -> content));
	result = head;
	lst = lst -> next;
	while (lst)
	{
		tmp = ft_lstnew(f(lst -> content));
		if (!tmp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		result -> next = tmp;
		result = result -> next;
		lst = lst -> next;
	}
	return (head);
}
