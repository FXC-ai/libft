#include "../libft.h"
#include <libc.h>

int main(int argc, char const *argv[])
{
    printf("----------------MEMCMP---------------\n");
    if (argc != 4)
    {
        printf("int memcmp(const void *s1, const void *s2, size_t n)");
        return 0;
    }

    const char *s1 = argv[1];
    const char *s2 = argv[2];
    size_t n = atoi(argv[3]);

    int result = memcmp(s1, s2, n);
    int result1 = ft_memcmp(s1, s2, n);

    printf("   memcmp : %d\n", result);
    printf("ft_memcmp : %d\n", result1);

    if (result != result1)
    {
        printf("FAIL !\n");
    }

    return 0;
}