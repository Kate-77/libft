/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <kmoutaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:04:55 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/23 16:17:31 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_memcmp is a re-coded memcmp function from <string.h> that compares the
	first n bytes of memory area str0 and memory area str1.
*/

#include "libft.h"

int	ft_memcmp(const void *str0, const void *str1, size_t n)
{
	unsigned char	*str0_temp;
	unsigned char	*str1_temp;
	int				i;

	str0_temp = (unsigned char *)str0;
	str1_temp = (unsigned char *)str1;
	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < (int)n)
	{
		if (str0_temp[i] != str1_temp[i])
			return (str0_temp[i] - str1_temp[i]);
		i++;
	}
	return (str0_temp[i] - str1_temp[i]);
}
