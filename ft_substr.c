/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:56:15 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/19 15:05:43 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_substr is a function that allocates and returns a substring from the
	string pointed to by s
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	int		i;
	int		l;
	int		size;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	size = l - start;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len < l - start)
		size = len;
	s2 = (char *)malloc(sizeof(char) * (size + 1));
	if (!s2)
		return (0);
	i = 0;
	while (i < (int)len && s[start])
		s2[i++] = s[start++];
	s2[i] = '\0';
	return (s2);
}
