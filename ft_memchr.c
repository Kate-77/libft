/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:18:34 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/19 15:49:01 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_memchr is a re-coded memchr function from <string.h> that searches for
	the first occurence of the character c in the first n bytes of the string
	pointed to by str.
*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str0;

	str0 = (unsigned char *)str;
	while ((int)n)
	{
		if (*str0 == (unsigned char)c)
			return (str0);
		str0++;
		n--;
	}
	return (0);
}
