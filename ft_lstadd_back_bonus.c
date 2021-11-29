/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:10:55 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/19 20:05:52 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_lstadd_back is a function that adds the element -new- at the end of the
	list
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	if (*lst == NULL)
		*lst = new;
	else
	{
		head = *lst;
		while (head -> next != NULL)
		{
			head = head -> next;
		}
		head -> next = new;
	}
}
