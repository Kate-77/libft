/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <kmoutaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:56:31 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/23 16:17:42 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_strlcat is a re-coded strlcat function from <bsd/string.h> that
	appends src onto the end of dest.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	src_length;
	unsigned int	dst_length;
	unsigned int	i;
	unsigned int	j;

	if (!dst || !src)
		return (0);
	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	if (size == 0)
		return (src_length);
	if (size <= dst_length)
		return (size + src_length);
	i = dst_length;
	j = 0;
	while (src[j] && i + 1 < size)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dst_length + src_length);
}
