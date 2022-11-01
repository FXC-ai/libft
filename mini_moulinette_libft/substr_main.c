#include "../libft.h"
#include <stdio.h>
#include <stdint.h>

int main()
{	

	char *str = "lorem ipsum dolor sit amet";
	unsigned int start = 1;
	size_t len = 10;


	char *result = ft_substr(str, start, len);
	printf("result = %s\n", result);

	return 0;

}