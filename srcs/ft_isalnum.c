/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:35:29 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/06 15:53:11 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
			|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
