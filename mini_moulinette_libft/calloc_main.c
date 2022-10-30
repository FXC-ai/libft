#include "../libft.h"
#include <stdio.h>

int main()
{
    size_t n = 4;
    size_t size = sizeof(int);

	void *result = ft_calloc(n, size);
    void *result2 = calloc(n, size);

	printf("ft_calloc = %p\n", result);
    printf("   calloc = %p\n", result2);

    size_t i = 0;

    while (i < (n*size))
    {
        printf("adress ft_calloc = %p\n", &result[i]);
        printf("adress    calloc = %p\n", &result2[i]);
        printf("            diff = %ld\n\n", (&result[i] - &result2[i]));
        i++;
    }
    
	
	return 0;
}