/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:32:22 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/07 11:51:57 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned char	*dest0;
	unsigned char	*src0;
	int				n0;
	int				i;

	dest0 = (unsigned char *)dest;
	src0 = (unsigned char *)src;
	n0 = (int)n;
	if (dest >= src)
	{
		i = n0 - 1;
		while (i >= 0)
		{
			dest0[i] = src0[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n0)
		{
			dest0[i] = src0[i];
			i++;
		}
	}
	return (dest);
}
