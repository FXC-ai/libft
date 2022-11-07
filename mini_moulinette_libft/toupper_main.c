#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("----------------TOUPPER---------------\n");
    
    int c = EOF;

    int result = toupper(c);
    int result1 = ft_toupper(c);

    printf("   toupper : %d\n", result);
    printf("ft_toupper : %d\n", result1);

    if (result != result1)
    {
        printf("FAIL !");
    }
    
    return 0;
}