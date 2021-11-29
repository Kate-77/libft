/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 22:54:01 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/19 20:31:34 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_lstadd_front is a function that adds the element -new- at the beginning
   	of the list.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int main()
{
	t_list *lst = ft_lstnew("everyone");
	t_list *new= ft_lstnew("hello ");
	t_list *new1 = ft_lstnew("1.");
	ft_lstadd_front(&lst, new);
	ft_lstadd_front(&lst, new1);
	printf("%s",lst -> content);
	lst = lst->next;
	printf("%s",lst->content);
	lst = lst ->next;
	printf("%s",lst->content);
}*/
