/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:13:04 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/13 20:26:40 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    i = 0;
	if (!s || !f)
		return ;
	while (s[i])
    {
		(*f)(i, &s[i]);
		i++;
    }
	return ;
}
