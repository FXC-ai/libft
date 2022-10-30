#include "../libft.h"
#include <stdio.h>

int main(void)
{
	const char *s1 = "one little example";
	char *s2 = ft_strdup(s1);
	char *s3 = strdup (s1);

	printf("ft_strdup s2 = %p : %s (copie depuis %p)\n", s2, s2, s1);
	printf("   strdup s2 = %p : %s (copie depuis %p)\n", s3, s3, s1);

	return 0;
}