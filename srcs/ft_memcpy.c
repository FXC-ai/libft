#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{

    size_t i;
    char *dst_cpy = (char *) dst;
    char *src_cpy = (char *) src;

    i = 0;
    while (i < n)
    {
        dst_cpy[i] = src_cpy[i];
        i++;
    }
    return (dst);
}