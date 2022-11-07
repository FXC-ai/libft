#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <libc.h>

int main(int argc, char const *argv[])
{

    printf("----------------ISALPHA---------------\n");

    printf("int ft_isalpha(int c)\n");
    
    int c = 'A';

    int result = isalpha(c);
    int result1 = ft_isalpha(c);

    printf("   isalpha : %d\n", result);
    printf("ft_isalpha : %d\n", result1);

	if (result != result1)
	{
		printf("FAIL !!!");
	}
	

    return 0;
}