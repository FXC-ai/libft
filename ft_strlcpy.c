/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:11:35 by fcoindre          #+#    #+#             */
/*   Updated: 2022/10/27 17:01:38 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srclen;

	srclen = ft_strlen(src);
    if (size == 0)
    {
        dest[0] = '\0';
    }
    else if (size > 0 && size <= srclen)
    {
        dest[size - 1] = '\0';
    }
    else
    {
        dest[srclen] = '\0';
    }
	while (size > 1 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	return (srclen);
}

