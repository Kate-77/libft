/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:07:36 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/19 20:07:40 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_lstlast is a function that returns the last element of the list.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*surf;

	surf = lst;
	while (surf != NULL)
	{
		if (surf -> next == NULL)
			return (surf);
		surf = surf -> next;
	}
	return (surf);
}
