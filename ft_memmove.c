/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:32:22 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/22 15:29:22 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_memmove is a re-coded -memmove- funtion from <string.h> that does the
	same job as memcpy except that it handles overlapping.
*/

#include "libft.h"

static unsigned char	*ft_move(unsigned char *dest, const unsigned char *src,
		size_t n)
{
	int	n0;
	int	i;

	n0 = (int)n;
	if (dest >= src)
	{
		i = n0 - 1;
		while (i >= 0)
		{
			dest[i] = src[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n0)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest0;
	const unsigned char	*src0;

	if (!dest && !src)
		return (NULL);
	dest0 = (unsigned char *)dest;
	src0 = (const unsigned char *)src;
	dest = ft_move(dest0, src0, n);
	return (dest);
}
