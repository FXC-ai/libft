/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:09:36 by fcoindre          #+#    #+#             */
/*   Updated: 2022/10/27 14:30:44 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    c = (unsigned char) c;
    unsigned char *ptr = (unsigned char*) b;

    i = 0;
    while (i < len)
    {
        *(ptr + i) = c;
        i++;
    }
    return (b);
}