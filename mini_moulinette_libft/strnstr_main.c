#include "../libft.h"
#include <libc.h>
#include <string.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
    printf("----------------STRNSTR---------------\n");
    if (argc != 4)
    {
        printf("char *strnstr(const char *haystack, const char *needle, size_t len);\n");
        return 0;
    }

    const char *str = argv[1];
    const char *to_find = argv[2];
    size_t n = atoi(argv[3]);

	char *result = ft_strnstr(str, to_find, n);
	char *result_c = strnstr(str, to_find, n);
	printf("   strnstr = %s\n", result_c);
	printf("ft_strnstr = %s\n", result);

    if (result != result1)
    {
        printf("FAIL !");
    }

	return (0);
}