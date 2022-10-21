#include <string.h>

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