/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:35:11 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/07 17:14:11 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char 	*s1_temp;
	unsigned char 	*s2_temp;
	unsigned int	i;

	s1_temp = (unsigned char *)s1;
	s2_temp = (unsigned char *)s2;
	if (!s1 && !s2)
		return (0);
	if ((ft_strlen((char *)s1) == 0) || (ft_strlen((char *)s2) == 0))
		return (s2_temp - s1_temp);
	i = 0;
	while (i < n - 1)
	{
		if (s1_temp[i] != s2_temp[i])
			return (s2_temp[i] - s1_temp[i]);	
		n--;
		i++;
	}
	return (0);
}
