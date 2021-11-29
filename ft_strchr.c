/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:55:38 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/19 00:47:06 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_strchr is a re-coded -strchr- function from <string.h> that searches
	for the first occurrence of the character c in the string pointed to
	by the argument str.
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	*str0;

	str0 = (unsigned char *)str;
	while (*str0)
	{
		if (*str0 == (unsigned char)c)
			return ((char *)str0);
		str0++;
	}
	if (*str0 == (unsigned char)c)
		return ((char *)str0);
	return (0);
}
