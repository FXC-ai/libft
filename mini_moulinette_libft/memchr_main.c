#include "../libft.h"

#include <libc.h>

int main()
{
    printf("----------------MEMCHR---------------\n");
    printf("void *memchr(const void *s, int c, size_t n)\n");
    
    const char s[] = {0, 1, 2 ,3 ,4 ,5};
    int c = 258;
    int n = 3;

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