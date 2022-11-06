
#include "../libft.h"
#include <stdio.h>

static char fct_test (unsigned int n, char c)
{
	if (n < 5)
	{
		return ft_tolower(((int) c));
	}
	return ft_toupper(((int) c));
}

int main()
{

	char (*ptr_fct_test)(unsigned int, char);
	ptr_fct_test = &fct_test;

	char *test0 = "Ceci est le test 0.";
	char *r0 = ft_strmapi(test0, ptr_fct_test);
	printf("result0 = \"%s\"\n\n", r0);

	char *test1 = "";
	char *r1 = ft_strmapi(test1, ptr_fct_test);
	printf("result1 = \"%s\"\n\n", r1);

	char *test2 = "abcdefghij";
	char *r2 = ft_strmapi(test2, ptr_fct_test);
	printf("result2 = \"%s\"\n\n", r2);

	char *test3 = "ABCDEFGHIJ";
	char *r3 = ft_strmapi(test3, ptr_fct_test);
	printf("result3 = \"%s\"\n\n", r3);

	return 0;
}