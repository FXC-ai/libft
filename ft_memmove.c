/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:09:20 by fcoindre          #+#    #+#             */
/*   Updated: 2022/10/27 14:30:44 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *pd;
    unsigned char *ps;
    
    pd = (unsigned char *) dst;
    ps = (unsigned char *) src;
    if (pd > ps && (ps + len) > pd)
    {
        while (len)
        {
            len--;
            *(pd + len) = *(ps + len);
        }
    }
    else
    {
        while (len)
        {
            *pd++ = *ps++;
            len--;
        }
    }
    return (dst);
}