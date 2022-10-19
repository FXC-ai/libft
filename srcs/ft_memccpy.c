#include <string.h>
#include <stdio.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t i;
    char *src_cpy;
    char *dst_cpy;
    char ch;

    i = 0;
    src_cpy = (char *) src;
    dst_cpy = (char *) dst;
    ch = c;
    while (i < n)
    {
        dst_cpy[i] = src_cpy[i];        
        if (src_cpy[i] == ch)
            return &dst_cpy[i + 1];
        i++;
    }
    return (NULL);
}