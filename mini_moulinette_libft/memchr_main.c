#include "../libft.h"
#include <libc.h>

int main(int argc, char const *argv[])
{
    printf("----------------MEMCHR---------------\n");
    if (argc != 4)
    {
        printf("void *memchr(const void *s, int c, size_t n)\n");
        return 0;
    }
    
    const char *s = argv[1];
    char c = argv[2][0];
    int n = atoi(argv[3]);

    void *result = memchr(s, c, n);
    void *result1 = ft_memchr(s, c, n);

    printf("   memchr : result = %p\n", result);
    printf("ft_memchr : result = %p\n", result1);

    if (result != result1)
    {
        printf("FAIL !\n");
    }
    return 0;
}