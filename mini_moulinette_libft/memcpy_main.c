#include "../libft.h"
#include <libc.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("----------------MEMCPY---------------\n");
    if (argc != 4)
    {
        printf("void *ft_memcpy(void *dst, const void *src, size_t n)");
        return 1;
    }

    size_t size_dst = strlen(argv[1]);

    char *src = argv[2];
    char *dst = (char *) malloc(sizeof(char) * (size_dst + 1));
    char *dst1 = (char *) malloc(sizeof(char) * (size_dst + 1));
    memcpy(dst, argv[1], size_dst);
    memcpy(dst1, argv[1], size_dst);


    printf("src = %s \n", src);
    printf("AVANT dst = %s\n", dst);

    memcpy(dst, src, atoi(argv[3]));
    ft_memcpy(dst1, src, atoi(argv[3]));

    printf("APRES memcpy    : dst = %s\n", dst);
    printf("APRES ft_memcpy : dst = %s\n", dst1);

    if (memcmp(dst, dst1, n) != 0)
    {
        printf ("FAIL !!\n")
    }
    

    return 0;
}