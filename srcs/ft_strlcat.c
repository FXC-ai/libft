/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:18:35 by fcoindre          #+#    #+#             */
/*   Updated: 2022/10/27 11:55:02 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <libc.h>

size_t	f_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c += 1;
	return (c);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	remaing;

	destlen = f_strlen(dest);
	srclen = f_strlen(src);
	if (size >= 0 && size < destlen)
		return (size + srclen);
	if (destlen == size)
		return (destlen + srclen);
	while (*dest != '\0')
		dest++;
	remaing = size - destlen;
	while (remaing > 1 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		remaing--;
	}
	*dest = '\0';
	return (destlen + srclen);
}
