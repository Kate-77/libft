/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:08:40 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/19 20:08:42 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_lstnew is a function that allocates and returns a new element -node-
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elmnt;

	new_elmnt = (t_list *)malloc(sizeof(t_list));
	if (!new_elmnt)
		return (new_elmnt);
	new_elmnt -> content = content;
	new_elmnt -> next = NULL;
	return (new_elmnt);
}
