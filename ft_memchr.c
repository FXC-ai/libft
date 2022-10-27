/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:08:20 by fcoindre          #+#    #+#             */
/*   Updated: 2022/10/27 14:30:44 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    void *result;
    unsigned char cc = c;
    char *ps = (char *) s;

    result = NULL;
    size_t i;
    i = 0;
    while (i < n)
    {
        if (ps[i] == cc)
        {
            return ((void *) &s[i]);
        }
        i++;
    }
    return (result);
}