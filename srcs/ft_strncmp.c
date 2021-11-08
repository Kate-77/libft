/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:35:11 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/08 10:45:48 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char 	*s1_temp;
	unsigned char 	*s2_temp;
	int				i;

	s1_temp = (unsigned char *)s1;
	s2_temp = (unsigned char *)s2;
	i = 0;
	if (!s1 && !s2)
		return (0);
	if ((ft_strlen((char *)s1) == 0) || (ft_strlen((char *)s2) == 0))
		return (s1_temp[i] - s2_temp[i]);
	while (i + 1 < (int)n && s2_temp[i] && s1_temp[i])
	{
		if (s1_temp[i] != s2_temp[i])
			return (s1_temp[i] - s2_temp[i]);	
		i++;
	}
	return (s1_temp[i] - s2_temp[i]);
}
