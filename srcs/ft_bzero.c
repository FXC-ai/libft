#include <string.h>

void ft_bzero(void *s, size_t n)
{
    if (n > 0)
    {
        size_t i;
        unsigned char *ptr = (unsigned char*) s;

        i = 0;
        while (i < n)
        {
            *(ptr + i) = '\0';
            i++;
        }
    }
}