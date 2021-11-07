/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:04:55 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/07 21:40:47 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"
int	ft_memcmp(const void *str0, const void *str1, size_t n)
{
	char	*str0_temp;
	char	*str1_temp;
	int		i;

	str0_temp = (char *)str0;
	str1_temp = (char *)str1;
	i = 0;
	while (i + 1 < (int)n)
	{
		if (str0_temp[i] != str1_temp[i])
			return (str0_temp[i] - str1_temp[i]);
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdefklger", 6);
   memcpy(str2, "abcdef", 6);

   ret = memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }

   return(0);
}
*/
