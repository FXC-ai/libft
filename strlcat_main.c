#include "includes/ft.h"
#include <stdio.h>
#include <string.h>
#include <libc.h>

int main(int argc, char *argv[])
{

    printf("----------------STRLCAT---------------\n");
    
    if (argc != 3)
    {
        printf("size_t strlcat(char *dst, const char *src, size_t dstsize);\n");
        printf("char dst[100] = \"0123456789\"\n");
        return 0;
    }

    char    *src = argv[1];

    char    dest1[100] = "01234";
    char    dest2[100] = "01234";
    
    size_t n = atoi(argv[2]);

    printf("dest = %s\n", dest1);
    
    printf("strlen(dest1) = %lu et strlen(src) = %lu\n", strlen(dest1), strlen(src));
    printf("strlen(dest2) = %lu et strlen(src) = %lu\n", strlen(dest2), strlen(src));
    printf("\n");
    
    unsigned int rslt2 = ft_strlcat(dest2, src,n);
    printf("ft_strlcat : %s et rslt = %d\n", dest2, rslt2);
    
    unsigned int rslt1 = strlcat(dest1, src,n);    
    printf("   strlcat : %s et rslt = %d\n", dest1, rslt1);

    if (rslt1 != rslt2)
    {
        printf("FAIL !!");
    }   
}