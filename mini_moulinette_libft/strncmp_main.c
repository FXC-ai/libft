#include "../libft.h"
#include <stdio.h>
#include <libc.h>

int main (int argc, char *argv[])
{
    printf("----------------STRNCMP---------------\n");
    if (argc != 4)
    {
        printf("int strncmp(const char *s1, const char *s2, size_t n);\n");
        return 0;
    }

    const char *s1 = argv[1];
    const char *s2 = argv[2];
    size_t n = atoi(argv[3]);

    int result = strncmp(s1, s2, n);
    int result1 = ft_strncmp(s1, s2, n);

    printf("   strcmp : %d\n", result);
    printf("ft_strcmp : %d\n", result1);

    if (result != result1)
    {
        printf("FAIL !");
    }
    
	return 0;
}