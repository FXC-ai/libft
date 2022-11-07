#include "../libft.h"

#include <libc.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("----------------STRCHR---------------\n");
    printf("char *strchr(const char *s, int c);\n");

    
    const char *s = "teste";
    int c = '\0';

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