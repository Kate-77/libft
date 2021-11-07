/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:35:11 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/07 12:56:31 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *s1_temp;
	unsigned char *s2_temp;
	
	s1_temp = (unsigned char *)s1;
	s2_temp = (unsigned char *)s2;
	while (n)
	{
		if (*s1_temp != *s2_temp)
			return (s2_temp - s1_temp);	
		n--;
	}
	return (0);
}
