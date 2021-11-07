/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:55:38 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/07 21:47:51 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"
char	*ft_strchr(const char *str, int c)
{
	char	*str0;

	str0 = (char *)str;
	while (*str0)
	{
		if (*str0 == c)
			return (str0);
		str0++;
	}
	if (*str0 == c)
			return (str0);
	return (0);
}
