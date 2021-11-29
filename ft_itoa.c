/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:48:39 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/19 16:36:19 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_itoa is a function that allocates and returns a string representing
	the integer received as an argument.
*/

#include "libft.h"

static int	ft_size(int n)
{
	int	size;

	size = 1;
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static char	*ft_convert(char *str, int n, int index, int sign)
{
	if (sign)
		str[0] = '-';
	while (n > 0)
	{
		str[index] = (n % 10) + '0';
		n = n / 10;
		index--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		sign;
	int		size;

	if (n == -2147483648)
	{
		result = ft_strdup("-2147483648");
		return (result);
	}
	sign = 0;
	if (n < 0)
	{
		n = n * -1;
		sign = 1;
	}
	size = ft_size(n) + sign;
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (!result)
		return (result);
	if (n == 0)
		result[0] = '0';
	result = ft_convert(result, n, size - 1, sign);
	result[size] = '\0';
	return (result);
}
