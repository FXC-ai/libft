#include "../libft.h"
#include <fcntl.h>
#include <stdio.h>

int main()
{

	ft_putnbr_fd(-2147483648, 2);
	printf("\n");
	
	ft_putnbr_fd(-2147483648, 2);
	printf("\n");

	ft_putnbr_fd(0, 2);
	printf("\n");

	ft_putnbr_fd(10, 2);
	printf("\n");

	ft_putnbr_fd(-7, 2);
	printf("\n");

	ft_putnbr_fd(1, 2);
	printf("\n");
	
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