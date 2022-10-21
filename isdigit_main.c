#include "includes/ft.h"
#include <ctype.h>
#include <stdio.h>
#include <libc.h>

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        printf("int ft_isdigit(int c)\n");
        return 0;
    }
    
    int c = (int) argv[1][0];

    int result = isdigit(c);
    int result1 = ft_isdigit(c);

    printf("   isdigit : %d\n", result);
    printf("ft_isdigit : %d\n", result1);

    return 0;
}