/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:35:08 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/08 15:47:37 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s12;
	int		i;
	int		j;
	int		size;

	if (!s1 || !s2)
		return (NULL); 
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	s12 = (char *)malloc(sizeof(char) * size);
	if (!s12)
		return (s12);
	i = 0;                        
	while (s1[i])
	{
		s12[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s12[i] = s2[j];
		i++;
		j++;
	}
	s12[i] = '\0';
	return (s12);
}
