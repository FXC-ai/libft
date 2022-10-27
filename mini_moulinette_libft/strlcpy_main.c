#include "../libft.h"
#include <stdio.h>
#include <libc.h>

int main(int argc, char *argv[])
{

    printf("----------------STRLCPY---------------\n");
    
    if (argc != 3)
    {
        printf("size_t strlcpy(char *dst, const char *src, size_t dstsize)\n");
        printf("char dst[100];\n");
        return 0;
    }

    char    *src = argv[1];

    char    dest1[100];
    char    dest2[100];
    
    size_t n = atoi(argv[2]);

    
    printf("strlen(src) = %lu\n", strlen(src));
    printf("strlen(src) = %lu\n", strlen(src));
    printf("\n");
    
    unsigned int rslt2 = ft_strlcpy(dest2, src,n);
    printf("ft_strlcpy : %s et rslt = %d\n", dest2, rslt2);
    write(1, dest2, 15);
    write(1, "\n", 1);
    
    unsigned int rslt1 = strlcpy(dest1, src,n);    
    printf("   strlcpy : %s et rslt = %d\n", dest1, rslt1);
    write(1, dest1, 15);
    write(1, "\n", 1);

    if (rslt1 != rslt2 || strcmp(dest1, dest2) != 0)
    {
        printf("FAIL !!");
    }   
}