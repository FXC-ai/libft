#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <libc.h>

int main(int argc, char const *argv[])
{

    printf("----------------ISALNUM---------------\n");
    if (argc != 2)
    {
        printf("int ft_isalnum(int c)\n");
        return 0;
    }
    
    int c = (int) argv[1][0];

    int result = isalnum(c);
    int result1 = ft_isalnum(c);

    printf("   isalnum : %d\n", result);
    printf("ft_isalnum : %d\n", result1);

    return 0;
}