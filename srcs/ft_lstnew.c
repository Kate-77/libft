/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 22:43:05 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/13 22:43:07 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *new_elmnt;

    new_elmnt = (t_list *)malloc(sizeof(t_list));
    if (!new_elmnt)
        return (new_elmnt);
    new_elmnt -> content = content;
    new_elmnt -> next = NULL;
    return (new_elmnt);
}