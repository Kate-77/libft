/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 00:12:41 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/11/07 19:44:08 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
# define size_t unsigned int
//typedef unsigned int size_t;
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
//size_t	ft_strlcpy(char *str0, const char *str1, size_t n);
//size_t	ft_strlcat(char *str0, const char *str1, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *str0, const char *str1, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str0, const void *str1, size_t n);
char	*strnstr(const char *str0, const char *str1, size_t n);
//int		ft_atoi(const char *str);
//void	*ft_calloc(size_t nitems, size_t n);
//char	*ft_strdup(const char *str);

#endif
