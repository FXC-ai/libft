#include "includes/ft.h"
#include <ctype.h>
#include <stdio.h>
#include <libc.h>

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        printf("int	ft_isprint(int c)");
        return 0;
    }
    
    int c = (int) argv[1][0];

    int result = isprint(c);
    int result1 = ft_isprint(c);

    printf("   isprint : %d\n", result);
    printf("ft_isprint : %d\n", result1);

    return 0;
}