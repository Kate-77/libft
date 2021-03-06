/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:48:50 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/19 16:49:07 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_putendl_fd is a function that outputs the string āsā to the given file
	descriptor, followed by a newline.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
	return ;
}
