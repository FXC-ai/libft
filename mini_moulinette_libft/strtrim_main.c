#include "../libft.h"
#include <stdio.h>

int main()
{
	char *i_test_str_0 = "AAAA";
	char *o_test_set_0 = "A";

	printf("Test 0 : str = \"%s\", set = \"%s\"\n", i_test_str_0, o_test_set_0);
	printf("Test 0 : str = \"%s\"\n", ft_strtrim(i_test_str_0, o_test_set_0));

	printf("\n");

	char *i_test_str_1 = "          ";
	char *o_test_set_1 = " ";

	printf("Test 1 : str = \"%s\", set = \"%s\"\n", i_test_str_1, o_test_set_1);
	printf("Test 1 : str = \"%s\"\n", ft_strtrim(i_test_str_1, o_test_set_1));

	printf("\n");

	char *i_test_str_2 = "";
	char *o_test_set_2 = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("Test 2 : str = \"%s\", set = \"%s\"\n", i_test_str_2, o_test_set_2);
	printf("Test 2 : str = \"%s\"\n", ft_strtrim(i_test_str_2, o_test_set_2));

	printf("\n");

	char *i_test_str_3 = "";
	char *o_test_set_3 = "";

	printf("Test 3 : str = \"%s\", set = \"%s\"\n", i_test_str_3, o_test_set_3);
	printf("Test 3 : str = \"%s\"\n", ft_strtrim(i_test_str_3, o_test_set_3));

	printf("\n");

	char *i_test_str_4 = " ABCD";
	char *o_test_set_4 = "";

	printf("Test 4 : str = \"%s\", set = \"%s\"\n", i_test_str_4, o_test_set_4);
	printf("Test 4 : str = \"%s\"\n", ft_strtrim(i_test_str_4, o_test_set_4));

	printf("\n");

	char *i_test_str_5 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAaAAAAA";
	char *o_test_set_5 = "A";

	printf("Test 5 : str = \"%s\", set = \"%s\"\n", i_test_str_5, o_test_set_5);
	printf("Test 5 : str = \"%s\"\n", ft_strtrim(i_test_str_5, o_test_set_5));


	printf("\n");

	char *i_test_str_6 = "AAABBB  iAAABBBi   BBBAAA";
	char *o_test_set_6 = "AB ";

	printf("Test 6 : str = \"%s\", set = \"%s\"\n", i_test_str_6, o_test_set_6);
	printf("Test 6 : str = \"%s\"\n", ft_strtrim(i_test_str_6, o_test_set_6));

	printf("\n");

	char *i_test_str_7 = "AAABBSDFGBhello world !BBBAGDSGESGSEGWERGSDFSGDFGWGERTGWERGEGAA";
	char *o_test_set_7 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("Test 7 : str = \"%s\", set = \"%s\"\n", i_test_str_7, o_test_set_7);
	printf("Test 7 : str = \"%s\"\n", ft_strtrim(i_test_str_7, o_test_set_7));

	printf("\n");

	char *i_test_str_8 = "AAABBSDFGBhello world HJDIQBAHH comment ca va ?BBBAGDSGESGSEGWERGSDFSGDFGWGERTGWERGEGAA";
	char *o_test_set_8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("Test 8 : str = \"%s\", set = \"%s\"\n", i_test_str_8, o_test_set_8);
	printf("Test 8 : str = \"%s\"\n", ft_strtrim(i_test_str_8, o_test_set_8));

	printf("\n");

	printf("Test 9 : str = \"%s\", set = \"%s\"\n", "abcd", "");
	printf("Test 9 : str = \"%s\"\n", ft_strtrim("abcd", ""));
	
	return 0;
}