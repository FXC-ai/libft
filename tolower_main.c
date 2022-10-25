#include "includes/ft.h"
#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        printf("int ft_tolower(int c)");
        return 0;
    }
    
    int c = (int) argv[1][0];

    int result = tolower(c);
    int result1 = ft_tolower(c);

    printf("   tolower : %c\n", result);
    printf("ft_tolower : %c\n", result1);

    return 0;
}