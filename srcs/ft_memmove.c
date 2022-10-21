#include <string.h>

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