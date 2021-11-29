/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:48:47 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/19 18:48:29 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_strtrim is a function that allocates and returns a copy of s1 with the
	characters specified in set removed from the beginning and the end of it.
*/

#include "libft.h"

static int	is_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_checkstart(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && is_set(set, s1[i]) == 1)
		i++;
	return (i);
}

static int	ft_checkend(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1);
	i--;
	while (i >= 0 && is_set(set, s1[i]) == 1)
		i--;
	return (i);
}

static int	ft_size(const char *s, int start, int end)
{
	int	i;

	i = 0;
	while (s[i + start] && i + start <= end)
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*s2;
	int		start;
	int		end;

	if (!s1 || !set)
		return (0);
	start = ft_checkstart(s1, set);
	end = ft_checkend(s1, set);
	s2 = (char *)malloc(sizeof(char) * (ft_size(s1, start, end) + 1));
	if (!s2)
		return (s2);
	i = 0;
	while (start <= end)
	{
		s2[i] = s1[start];
		start++;
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
