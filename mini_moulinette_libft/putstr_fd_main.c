#include "../libft.h"
#include <fcntl.h>

void    ft_putchar_fd(char c, int fd)
{
	if (fd > 2)
	{
		write(fd, &c, 1);
	}
}


int main()
{
	int fd = open("fileTest.txt", O_RDWR);
	ft_putstr_fd("Hello World ! Comment ça va ?\n", fd);
	close(fd);
	return 0;
}