/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:14:02 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/07 12:31:34 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	*str0;
	int		i;

	str0 = (char *)str;
	while (*str0)
	{
		i = 0;
		if (*str0 == c)
		{
			i++;
			if (*str == '\0')
				return (str0 + i);
		}
		str++;
	}
	return (0);
}