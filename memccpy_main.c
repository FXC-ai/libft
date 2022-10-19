#include "includes/ft.h"
#include <libc.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    if (argc != 5)
    {
        printf("void *ft_memccpy(void *dst, const void *src, int c, size_t n)");
        return 1;
    }
    
    size_t size_dst = strlen (argv[1]);

    char *cpy_dst = (char *) malloc(sizeof(char) * (size_dst + 1));
    char *cpy_dst_1 = (char *) malloc(sizeof(char) * (size_dst + 1));

    memcpy(cpy_dst, argv[1],  size_dst);
    memcpy(cpy_dst_1, argv[1],  size_dst);

    printf("AVANT : %s\n\n", cpy_dst);

    int c = atoi(argv[3]);

    void *result = memccpy(cpy_dst, argv[2], c, atoi(argv[4]));
    void *result1 = ft_memccpy(cpy_dst_1, argv[2], c, atoi(argv[4]));

    char *resultcp = (char *) result;
    char *resultcp1 = (char *) result1;
    
    printf("memccpy    : %s\n", cpy_dst);
    printf("ft_memccpy : %s\n", cpy_dst_1);
    printf("result memccpy    = %c\n", *resultcp);
    printf("result ft_memccpy = %c\n", *resultcp1);

    return 0;
}