/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:48:32 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/08 20:04:07 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	unsigned int	count;
	unsigned int 	i;

	i = 0;
	count = 0;
	while(src[count])
		count++;
	if (n != 0)
	{
		while (src[i] && i < n - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}
