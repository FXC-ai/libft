/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:09:20 by fcoindre          #+#    #+#             */
/*   Updated: 2022/11/07 21:58:49 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *pd;
    unsigned char *ps;
    
    pd = (unsigned char *) dst;
    ps = (unsigned char *) src;
    if (pd == NULL || ps == NULL)
    {
        return (NULL);
    }
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

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    printf("----------------MEMMOVE---------------\n");
    printf("%p",);




    int decalage = 5;
    int n_caract = 9;

    char source1[] = "AbCdEfGhIjKlM";
    char *destination1 = source1 + decalage;

    char source2[] = "AbCdEfGhIjKlM";
    char *destination2 = source2 + decalage;

    printf("Test en cours :\n");
    printf("decalage = %d\n", decalage);
    printf("n_caract = %d\n", n_caract);
    printf("size_src = %lu\n", strlen(source1));
    printf("source      = %s\n", source1);
    printf("destination = %s\n\n", destination1);

    void *result1 = memmove(destination1, source1, n_caract);
    void *result2 = ft_memmove(destination2, source2, n_caract);

    printf("SOURCES : \n");
    printf("memmove    : %p : source1      = %s\n", source1, source1);
    printf("ft_memmove : %p : source2      = %s\n", source2, source2);

    printf("DESTINATIONS : \n");
    printf("memmove    : %p : destination1 = %s\n", destination1, destination1);
    printf("ft_memmove : %p : destination2 = %s\n", destination2, destination2);
    printf("Comparison : %d\n", strcmp(destination1,destination2));

    printf("\n");
    printf("memmove    : %p (return)\n", result1);
    printf("ft_memmove : %p (return)\n", result2);
}