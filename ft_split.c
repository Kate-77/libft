/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:41:21 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/19 16:35:29 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_split is a function that allocates and returns an array of strings
	obtained by splitting s using the c delimiter.
*/

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			l++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (l);
}

static int	ft_wordlen(const char *s, char c)
{
	int	l;
	int	i;

	i = 0;
	l = 0;
	while (s[i] && s[i] != c)
	{
		l++;
		i++;
	}
	return (l);
}

static char	*ft_popup(const char *s, char c)
{
	int		i;
	int		length;
	char	*new_s;

	i = 0;
	length = ft_wordlen(s, c);
	new_s = (char *)malloc(sizeof(char) * length + 1);
	if (!new_s)
		return (new_s);
	while (s[i] && s[i] != c)
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

static char	**ft_dmagic(char const *s, char **str, char c, int j)
{
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			str[j] = ft_popup(s, c);
			if (!str[j])
			{
				free(str);
				return (NULL);
			}
			j++;
		}
		while (*s && *s != c)
			s++;
	}
	str[j] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		j;

	j = 0;
	if (!s)
		return (0);
	str = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!str)
		return (str);
	str = ft_dmagic(s, str, c, j);
	return (str);
}
