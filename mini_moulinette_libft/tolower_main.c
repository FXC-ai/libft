#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("----------------TOLOWER---------------\n");
    printf("int ft_tolower(int c)\n");
    
    int c = EOF;

    int result = tolower(c);
    int result1 = ft_tolower(c);

    printf("   tolower : %d\n", result);
    printf("ft_tolower : %d\n", result1);

    if (result != result1)
    {
        printf("FAIL !");
    }

    return 0;
}