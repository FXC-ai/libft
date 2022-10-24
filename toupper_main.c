#include "includes/ft.h"
#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        printf("int ft_toupper(int c)");
        return 0;
    }
    
    int c = (int) argv[1][0];

    int result = toupper(c);
    int result1 = ft_toupper(c);

    printf("   toupper : %c\n", result);
    printf("ft_toupper : %c\n", result1);

    return 0;
}