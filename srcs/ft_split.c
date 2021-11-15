/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:41:21 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/15 01:35:52 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if(s[i] && s[i] != c)
			l++;
		while(s[i] && s[i] != c)
			i++;
	}
	return (l);
}

int	ft_wordlen(const char	*s, char c)
{
	int	l;
	int i;

	i = 0;
	l = 0;
	while (s[i] && s[i] != c)
	{
		l++;
		i++;
	}
	return (l);
}

char	*ft_popup(const char *s, char c)
{
	int	i;
	int	length;
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

char    **ft_split(char const *s, char c)
{
    char    **str;
    int     i;
    int wc;
	int	j;

	if (!s)
		return (0);
    i = 0;
	j = 0;
	wc = ft_wordcount(s, c);
	str = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!str)
		return (str);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			str[j] = ft_popup(&s[i], c);
			j++;
		}
		while(s[i] && s[i] != c)
			i++;
	}
	str[j] = 0;
	return (str);
}
/*
#include <stdio.h>
int main()
{
    char    *s;
    char    c;
    int     i;

    s = "***ookkkkk****kkkk**kkkk***kkkk**";
    c = '*';
    char **v = ft_split(s, c);
	i = 0;

	while(v[i])	
	{
		printf("v[%d] => %s \n", i, v[i]);
  		i++;	
	}
    //printf("%d", i);
}*/
