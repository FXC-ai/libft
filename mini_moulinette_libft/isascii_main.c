#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

int main()
{
    char c;

    c = 'h';
    printf("Pour %c    isascii = %d\n", c,isascii(c));
    printf("Pour %c ft_isascii = %d\n", c,ft_isascii(c));
    if (isascii (c) != ft_isascii(c))
        printf("FAIL !!\n");
    

    c = '^';
    printf("Pour %c    isascii = %d\n", c,isascii(c));
    printf("Pour %c ft_isascii = %d\n", c,ft_isascii(c));
    if (isascii (c) != ft_isascii(c))
        printf("FAIL !!\n");

    c = '?';
    printf("Pour %c    isascii = %d\n", c,isascii(c));
    printf("Pour %c ft_isascii = %d\n", c,ft_isascii(c));
    if (isascii (c) != ft_isascii(c))
        printf("FAIL !!\n");


    c = '\t';
    printf("Pour %c    isascii = %d\n", c,isascii(c));
    printf("Pour %c ft_isascii = %d\n", c,ft_isascii(c));
    if (isascii (c) != ft_isascii(c))
        printf("FAIL !!\n");


    c = '@';
    printf("Pour %c    isascii = %d\n", c,isascii(c));
    printf("Pour %c ft_isascii = %d\n", c,ft_isascii(c));
    if (isascii (c) != ft_isascii(c))
        printf("FAIL !!\n");

    c = '\\';
    printf("Pour %c    isascii = %d\n", c,isascii(c));
    printf("Pour %c ft_isascii = %d\n", c,ft_isascii(c));
    if (isascii (c) != ft_isascii(c))
        printf("FAIL !!\n");

    int d = 420;
    printf("Pour %d    isascii = %d\n", d,isascii(d));
    printf("Pour %d ft_isascii = %d\n", d,ft_isascii(d));
    if (isascii (d) != ft_isascii(d))
        printf("FAIL !!\n");

    return 0;
}