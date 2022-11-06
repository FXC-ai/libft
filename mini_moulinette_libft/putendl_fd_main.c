
#include "../libft.h"
#include <fcntl.h>

int main()
{
	int fd = open("fileTest.txt", O_RDWR);
	ft_putendl_fd("ESSAI 1", fd);
	close(fd);

	int fd1 = open("fileTest.txt", O_RDWR);
	ft_putendl_fd("", fd1);
	close(fd1);

    int fd2 = open("fileTest.txt", O_RDWR);
	ft_putendl_fd(NULL, fd2);
	close(fd2);

	int fd3 = open("fileTest.txt", O_RDWR);
	ft_putendl_fd("one", fd3);
	close(fd3);

	return 0;
}