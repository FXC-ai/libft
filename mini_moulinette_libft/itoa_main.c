#include "../libft.h"
#include <stdio.h>

int main ()
{
	int test[9];

	test[0] = -0;
	test[1] = 1;
	test[2] = 2147483647;
	test[3] = -2147483648;
	test[4] = -1;
	test[5] = -900000009;
	test[6] = 0;
	test[7] = 1000000008;
	test[8] = 01010;


	char *result;
	char verif[12];

	int i = 0;
	while (i < 9)
	{
		result = ft_itoa(test[i]);
		printf("result = %s\n", result);
		sprintf(verif, "%d", test[i]);
		printf("verif  = %s\n\n", verif);	
		if (strcmp(result, verif) != 0)
		{
			printf("FAIL !!");
		}
		i++;
	}
	
	return 0;
}