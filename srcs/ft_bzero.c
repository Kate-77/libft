/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:36:10 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/06 15:54:18 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*str0;

	str0 = (unsigned char *)str;
	while (n)
	{
		*str0 = '\0';
		str0++;
		n--;
	}
	return ;
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char	str[] = "Hello";
	ft_bzero(str, 3);
	printf("%s", str);
	return (0);
}*/
