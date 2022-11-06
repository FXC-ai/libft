
#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
	size_t          size_s;
    char            *s_nb;

	if (fd > 2)
	{
        s_nb = ft_itoa(n);
		size_s = ft_strlen(s_nb); 
		write(fd, s_nb, size_s);
	}

}
