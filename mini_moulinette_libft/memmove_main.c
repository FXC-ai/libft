#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    printf("----------------MEMMOVE---------------\n");

 	char b[0xF0];

    printf("ft_memmove(((void *)0), b, 5) : %p\n", ft_memmove(((void *)0), b, 5));
    printf("\n");

    int decalage = 5;
    int n_caract = 9;

    char source1[] = "AbCdEfGhIjKlM";
    char *destination1 = source1 + decalage;

    char source2[] = "AbCdEfGhIjKlM";
    char *destination2 = source2 + decalage;

    printf("Test en cours :\n");
    printf("decalage = %d\n", decalage);
    printf("n_caract = %d\n", n_caract);
    printf("size_src = %lu\n", strlen(source1));
    printf("source      = %s\n", source1);
    printf("destination = %s\n\n", destination1);

    void *result1 = memmove(destination1, source1, n_caract);
    void *result2 = ft_memmove(destination2, source2, n_caract);

    printf("SOURCES : \n");
    printf("memmove    : %p : source1      = %s\n", source1, source1);
    printf("ft_memmove : %p : source2      = %s\n", source2, source2);

    printf("DESTINATIONS : \n");
    printf("memmove    : %p : destination1 = %s\n", destination1, destination1);
    printf("ft_memmove : %p : destination2 = %s\n", destination2, destination2);
    printf("Comparison : %d\n", strcmp(destination1,destination2));

    printf("\n");
    printf("memmove    : %p (return)\n", result1);
    printf("ft_memmove : %p (return)\n", result2);
}