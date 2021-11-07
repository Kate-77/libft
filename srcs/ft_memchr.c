/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:18:34 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/07 13:48:48 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"
void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str0;

	str0 = (unsigned char *)str;
	while (n)
	{
		if (*str0 == c)
			return (str0);
		n--;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "h.ttp://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
*/