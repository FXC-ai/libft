#include "includes/ft.h"
//#include <libc.h>

int main(int argc, char *argv[])
{

    int check;

    check = 0;
    if(argc == 2)
    {
        check = argv[1][0] - '0';
    }
    

    /* TEST DE MEMSET */
    if (check == 1 || check == 0)
    {
       
        char strtest_1[10] = "000000000";
        char strtest_2[10] = "000000000";

        printf("strtest_1 : %s\n", strtest_1);
        printf("strtest_2 : %s\n", strtest_2);

        memset((strtest_1 + 1), 'I', 4);
        ft_memset((strtest_2 + 1), 'I', 4);

        printf("memset    : %s\n", strtest_1);
        printf("ft_memset : %s\n", strtest_2);
    }
    /* TEST DE FT_STRNCMP */

    if (check == 2 || check == 0)
    {
	    char *s1_test0 = "abcd";
	    char *s2_test0 = "abcde";

	    char *s1_test1 = "abcde";
	    char *s2_test1 = "abcd";

	    char *s1_test2 = "a i iiiiii\n....bcDe";
	    char *s2_test2 = "azbcde";

	    unsigned int n = 0;

	    int test0 = strncmp(s1_test0, s2_test0, n);
	    int test1 = strncmp(s1_test1, s2_test1, n);
	    int test2 = strncmp(s1_test2, s2_test2, n);

	    printf("strncmp : TEST0 = %d || TEST1 = %d || TEST2 = %d\n", test0, test1, test2);


	    test0 = ft_strncmp(s1_test0, s2_test0, n);
	    test1 = ft_strncmp(s1_test1, s2_test1, n);
	    test2 = ft_strncmp(s1_test2, s2_test2, n);
	
	    printf("ft_strncmp : TEST0 = %d || TEST1 = %d || TEST2 = %d\n", test0, test1, test2);
    }

    /* TEST DE STRLEN */

    if (check == 3 || check == 0)
    {
	    char *str = "Try Hard !!!";

	    int str_size = ft_strlen(str);

	    printf("Il y a %d caracteres dans ce str.", str_size);
    }

    return 0;
}