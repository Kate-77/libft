/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:53:56 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/13 21:53:58 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    char    nn;

    if (n == 2147483647)
        write(fd, "2147483647", 10);
    else if (n == -2147483648)
    {
        write(fd, "-", 1);
        write(fd, "2147483648", 10);
    }
    else if (n < 0)
    {
        write(fd, "-", 1);
        ft_putnbr_fd(n * -1, fd);
    }
    else if (n >= 0 && n <= 9)
    {    
        nn = n + '0';
        write(fd, &nn, 1);
    }
    else
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
}
