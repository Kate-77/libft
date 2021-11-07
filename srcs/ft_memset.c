/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:36:02 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/07 09:49:21 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*str1;
	unsigned int	i;

	str1 = (unsigned char*)str;
	i = 0;
	while (n)
	{
		str1[i] = c;
		i++;
		n--;
	}
	return (str);
}
