/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:48:39 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/15 00:34:54 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int ft_size(int n)
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

char	*ft_convert(char *str, int n, int index)
{
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
	if (sign)
		result[0] = '-';
	if (n == 0)
		result[0] = '0';
	result = ft_convert(result, n, size - 1);
	result[size] = '\0';
	return (result);
}
