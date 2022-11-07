#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <libc.h>

int main(int argc, char const *argv[])
{

    printf("----------------ISDIGIT---------------\n");
    
    printf("int ft_isdigit(int c)\n");

    
    int c = 314;

    int result = isdigit(c);
    int result1 = ft_isdigit(c);

    printf("   isdigit : %d\n", result);
    printf("ft_isdigit : %d\n", result1);

	if (result != result1)
	{
		printf("FAIL !!!\n\n");
	}

	int i;

 	i = -1;
 	while (i < 530)
 	{
 		if (!!ft_isdigit(i) != !!isdigit(i))
 			printf("FAIL : %d\n", i);
 		i++;
 	}
 	printf("SUCCESS");
	

    return 0;
}