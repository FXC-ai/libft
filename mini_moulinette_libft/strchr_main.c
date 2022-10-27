#include "../libft.h"
#include <libc.h>

int main(int argc, char const *argv[])
{
    printf("----------------STRCHR---------------\n");
    if (argc != 3)
    {
        printf("char *strchr(const char *s, int c);\n");
        return 0;
    }
    
    const char *s = argv[1];
    int c = (int) argv[2][0];

    void *result = strchr(s, c);
    void *result1 = ft_strchr(s, c);

    printf("   strchr : result = %p\n", result);
    printf("ft_strchr : result = %p\n", result1);

	if (result != result1)
	{
		printf("FAIL !");
	}
	

    return 0;
}