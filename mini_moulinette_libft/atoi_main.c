#include ../libft.h
#include <stdio.h>

int main()
{	
	const char *str = "10001";

	printf("   atoi : %d\n", atoi(str));
	printf("ft_atoi : %d\n", ft_atoi(str));

	return 0;
}