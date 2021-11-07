/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:35:10 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/04 13:59:12 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		return (1);
	else
		return (0); 
}
/*
#include <stdio.h>
int	main()
{
	int	c;
	c  = 'r';
	printf("%d", isalpha(c));
	return (0);
}*/
