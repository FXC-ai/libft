#include "../libft.h"
#include <stdio.h>

static void fct_test (unsigned int n, char *c)
{
	if (n < 5)
	{
		*c = ft_tolower(((int) (*c)));
	}
    else
    {
        *c = ft_toupper(((int) (*c)));
    }
	
}

int main()
{

	void (*ptr_fct_test)(unsigned int, char*);
	ptr_fct_test = &fct_test;

    char test0[] = "Je suis le test O.";
	printf("Avant ft_striteri : \"%s\"\n", test0);
    ft_striteri(test0, ptr_fct_test);
	printf("Apres ft_stritefi : \"%s\"\n\n", test0);

    char test1[] = "";
	printf("Avant ft_striteri : \"%s\"\n", test1);
    ft_striteri(test1, ptr_fct_test);
	printf("Apres ft_stritefi : \"%s\"\n\n", test1);

    char test2[] = "Exemple avec une fonction qui existe pas.";
	printf("Avant ft_striteri : \"%s\"\n", test2);
    ft_striteri(test2, NULL);
	printf("Apres ft_stritefi : \"%s\"\n\n", test2);


	return 0;
}