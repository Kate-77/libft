/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:14:02 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/19 00:48:13 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_strrchr is a re-coded -strrchr- function from <string.h> that searches
	for the last occurrence of the character c in the string pointed to
	by the argument str.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	*str0;
	unsigned char	*ptr;

	str0 = (unsigned char *)str;
	ptr = NULL;
	while (*str0)
	{
		if (*str0 == (unsigned char)c)
			ptr = str0;
		str0++;
	}
	if (*str0 == (unsigned char)c)
		return ((char *)str0);
	return ((char *)ptr);
}
