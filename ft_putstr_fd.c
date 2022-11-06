#include "libft.h"
#include <fcntl.h>

void    ft_putchar_fd(char c, int fd)
{
    if (fd > 2)
    {
        write(fd, &c, 1);
    }
}

void ft_putstr_fd(char *s, int fd)
{
    unsigned int i;
    size_t size_s;
    if (s != NULL)
    {
        size_s = ft_strlen(s);    
        i = 0;
        write (fd, &s[i], size_s);
    }
}

int main()
{
    int fd = open("fileTest.txt", O_RDWR);
    ft_putstr_fd("Hello World !", fd);
    close(fd);
    return 0;
}