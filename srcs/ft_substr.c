/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:56:15 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/08 13:28:05 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	int		i;
		
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s2 || !s)
		return (0);
	if (start >= ft_strlen(s))
			return (s2);
	i = 0;
	while (i < (int)len)
	{
		s2[i] = s[start];
		i++;
		start++;

	}
	s2[i] = '\0';
	return (s2);
}
