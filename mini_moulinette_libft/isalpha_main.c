#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <libc.h>

int main(int argc, char const *argv[])
{

    printf("----------------ISALPHA---------------\n");

    if (argc != 2)
    {
        printf("int ft_isalpha(int c)\n");
        return 0;
    }
    
    int c = (int) argv[1][0];

    int result = isalpha(c);
    int result1 = ft_isalpha(c);

    printf("   isalpha : %d\n", result);
    printf("ft_isalpha : %d\n", result1);

    return 0;
}