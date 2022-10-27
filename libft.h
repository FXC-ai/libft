/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:49:57 by fcoindre          #+#    #+#             */
/*   Updated: 2022/10/27 12:14:31 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int     ft_atoi(const char *str);
void    *ft_memset(void *b, int c, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *str);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memccpy(void *dst, const void *src, int c, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int     ft_tolower(int c);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	**ft_split(char *str, char *charset);

#endif