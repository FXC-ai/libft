#include "../libft.h"
#include <fcntl.h>

int main()
{
	int fd = open("fileTest.txt", O_RDWR);
	ft_putnbr_fd(123, fd);
	close(fd);

	int fd1 = open("fileTest.txt", O_RDWR);
	ft_putnbr_fd(2147483647, fd1);
	close(fd1);

	int fd2 = open("fileTest.txt", O_RDWR);
	ft_putnbr_fd(-2147483648, fd2);
	close(fd2);

	int fd3 = open("fileTest.txt", O_RDWR);
	ft_putnbr_fd(9, fd3);
	close(fd3);

	return 0;
}