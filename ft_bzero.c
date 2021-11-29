/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:36:10 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/19 15:28:41 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_bzero is a re-coded bzero function from <string.h> that erases the data
	in the n bytes of the memory stating at the location pointed to by str, by
	writing -\0- to that area.
*/

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*str0;

	str0 = (unsigned char *)str;
	while (n > 0)
	{
		*str0 = '\0';
		str0++;
		n--;
	}
	return ;
}
