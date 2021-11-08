/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:14:02 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/07 21:52:10 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
char	*ft_strrchr(const char *str, int c)
{
	char	*str0;
	char	*ptr;
	int		i;

	str0 = (char *)str;
	ptr = NULL;
	i = 0;
	while (*str0)
	{
		if (*str0 == c)
			ptr = str0;
		str0++;
	}
	if (*str0 == c)
		return (str0);
	return (ptr);
}
