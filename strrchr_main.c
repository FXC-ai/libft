#include "includes/ft.h"
#include <libc.h>

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        printf("char *strrchr(const char *s, int c);\n");
        return 0;
    }
    
    const char *s = argv[1];
    int c = (int) argv[2][0];

    void *result = strrchr(s, c);
    void *result1 = ft_strrchr(s, c);

    printf("   strrchr : result = %p\n", result);
    printf("ft_strrchr : result = %p\n", result1);

	if (result != result1)
	{
		printf("FAIL !");
	}
	
    return 0;
}