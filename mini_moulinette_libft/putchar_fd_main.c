#include "../libft.h"
#include <fcntl.h>

int main()
{
    int fd = open("fileTest.txt", O_RDWR);
    ft_putchar_fd('S', fd);

    return 0;
}