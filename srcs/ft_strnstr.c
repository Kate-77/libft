/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:15:30 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/07 19:32:46 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
char	*ft_strnstr(const char *str0, const char *str1, size_t n)
{
	char	*str0_temp;
	char	*str1_temp;
	unsigned int	i;
	unsigned int	j;

	str0_temp = (char *)str0;
	str1_temp = (char *)str1;
	i = 0;
	j = 0;
	while (str0_temp[i] && i < n)
	{
		j = 0;
		while (str1_temp[j] && str0_temp[i + j] == str1_temp[j] && i + j < n)
		{
			if (str1_temp[j + 1] == '\0')
				return (&str0_temp[i]);
			j++;
		}
		i++;
	}
	if(j == ft_strlen(str1))
		return ((char *)str0);
	return (NULL);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char	str[] = "123Kaoutarlkgje";
	char	*str0 = "";
	printf("%s", ft_strnstr(str, str0, 11));
	return (0);

}*/

