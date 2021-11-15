/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:48:47 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/15 17:01:38 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
int is_set(char const *set , char c)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_checkstart(char const *s1, char const *set)
{
	int i;

	i = 0;
	while (s1[i] && is_set(set, s1[i]) == 1)
		i++;
	return (i);
}

int	ft_checkend(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1);
	i--;
	while (i >= 0 && is_set(set, s1[i]) == 1)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int 	i;
	char	*s2;
	int		start;
	int		end;

	if (!s1 || !set)
		return (0);
	start = ft_checkstart(s1, set);
	end = ft_checkend(s1, set);
	s2 = (char *)malloc(sizeof(char) * ((end - start) + 2));
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
/*
#include <stdio.h>
int	main()
{
	char *s1;
	char *s2;

	s1 = " \t \t \n  \n\n\n\t";
	s2 = ft_strtrim(s1, " \n\t");
	printf("%s", s2);
	return (0);
}*/
