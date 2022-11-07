
#include "../libft.h"
#include <stdio.h>

int main()
{


	char **tab = ft_split("hello!", ' ');
	
	int i = 0;

	while (tab[i] != 0)
	{
		printf("tab[%d] = \"%s\"\n", i, tab[i]);
		free(tab[i]);
		i++;
	}

	free(tab);

	return (0);

}