/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:36:24 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/07 09:55:15 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest0;
	const unsigned char	*src0;
	unsigned int 		i;
	
	i = 0;
	dest0 = (unsigned char *)dest;
	src0 = (const unsigned char *)src;
	while (n)
	{
		dest0[i] = src0[i];
		i++;
		n--;
	}
	return (dest);
}
