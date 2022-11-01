
#include <stdlib.h>
#include "libft.h"
#include <stdbool.h>
#include <stdio.h>

static bool	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (true);
		i++;
	}
	return (false);
}

int	result_len(const char *str, const char *set)
{
	int	i;
	int	char_count;

	i = 0;
	char_count = 0;
	while (str[i])
	{
		if (is_in_set(str[i], set))
			char_count++;
		i++;
	}
	return (i - char_count);
}

char	*ft_strtrim(const char *str, const char *set)
{
	char	*result;
	int		i;
	int		j;

	result = malloc(sizeof(*result) * result_len(str, set) + 1);
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (!is_in_set(str[i], set))
		{
			result[j] = str[i];
			j++;
		}
		i++;
	}
	return (result);
}

int main()
{
    char *i_test_str_0 = "i";
    char *o_test_set_0 = " ";

    printf("Test 0 : str = \"%s\", set = \"%s\"\n", i_test_str_0, o_test_set_0);
    printf("Test 0 : str = \"%s\"\n", ft_strtrim(i_test_str_0, o_test_set_0));

    printf("\n");

    char *i_test_str_1 = "AAiAA";
    char *o_test_set_1 = "AAA";

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
    
    return 0;
}