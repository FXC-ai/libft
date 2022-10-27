#include "../libft.h"
#include <libc.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("----------------BZERO---------------\n");

    if (argc != 3)
    {
        printf("void ft_bzero(void *s, size_t n)");
        return 0;
    }
    
    size_t size_strtest = strlen (argv[1]);

    char *strbzero = (char *) malloc(sizeof(char) * (size_strtest+1));
    char *strbzero_1 = (char *) malloc(sizeof(char) * (size_strtest+1));

    memcpy(strbzero, argv[1],  size_strtest);
    memcpy(strbzero_1, argv[1],  size_strtest);

    printf("AVANT : %s\n\n", strbzero);

    bzero(strbzero, atoi(argv[2]));
    ft_bzero(strbzero_1, atoi(argv[2]));


    printf("APRES :\n");
    size_t i = 0;
    while (i < size_strtest)
    {
        printf("bzero / ft_bzero : %c / %c\n", strbzero[i], strbzero_1[i]);
        if (strbzero[i] != strbzero_1[i])
        {
            printf("FAIL !!");
            return 0;
        }
        
        i++;
    }

    return 0;
}