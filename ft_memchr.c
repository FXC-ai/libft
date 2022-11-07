/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:08:20 by fcoindre          #+#    #+#             */
/*   Updated: 2022/11/07 19:52:03 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *cs = (unsigned char *) s;
    unsigned char cc = (unsigned char) c;

    size_t i;
    i = 0;
    while (i < n)
    {
        if (cs[i] == cc)
        {
            return ((void *) &s[i]);
        }
        i++;
    }
    return (NULL);
}
