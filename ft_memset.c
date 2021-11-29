/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:36:02 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/22 09:44:07 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_memset is a re-coded -memset- function that copies the -unsigned characted- 
	c to the first n characters of the string pointed to by str.
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*str1;
	unsigned int	i;

	str1 = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		str1[i] = c;
		i++;
	}
	return (str);
}
