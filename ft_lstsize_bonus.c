/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:09:01 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/19 20:09:04 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_lstsize is a function that counts the number of elements in a list.
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*lst0;

	i = 0;
	lst0 = lst;
	while (lst0 != NULL)
	{
		lst0 = lst0 -> next;
		i++;
	}
	return (i);
}
