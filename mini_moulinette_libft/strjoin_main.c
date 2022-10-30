#include "../libft.h"
#include <stdio.h>

int main(void)
{
	const char *s1 = "Hello ";
	const char *s2 = "World !!!";

	const char* result = ft_strjoin(s1, s2);

	printf("ft_strjoin : %s", result);

	return 0;
}