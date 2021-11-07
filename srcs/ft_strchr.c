/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:55:38 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/07 13:50:28 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	char	*str0;

	str0 = (char *)str;
	while (*str0)
	{
		if (*str0 == c)
			return (str0);
	}
	return (0);
}
#include <stdio.h>
#include <string.h>

int main () {
	   const char str[] = "h.ttp://www.tutorialspoint.com";
	      const char ch = '.';
		     char *ret;

			    ret = ft_strchr(str, ch);

				   printf("String after |%c| is - |%s|\n", ch, ret);

				      return(0);
}

