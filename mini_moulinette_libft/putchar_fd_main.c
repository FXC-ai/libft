#include "../libft.h"
#include <fcntl.h>

int main()
{
    int fd = open("fileTest.txt", O_RDWR);
    ft_putchar_fd('S', fd);

    ft_putchar_fd('S', 2);

    return 0;
}