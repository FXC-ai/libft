#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    size_t size_s;
    if (s != NULL && fd > 2)
    {
        size_s = ft_strlen(s);    
        write (fd, s, size_s);
    }
}
