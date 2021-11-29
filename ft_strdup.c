/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:21:12 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/19 18:20:48 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_strdup is a re-coded strdup function from <string.h> that duplicates
	the string pointed to by s1	
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1_temp;
	char	*s2;
	int		i;

	s1_temp = (char *)s1;
	s2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!s2)
		return (s2);
	i = 0;
	while (s1_temp[i])
	{
		s2[i] = s1_temp[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
