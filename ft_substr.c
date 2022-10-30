/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 09:57:09 by fcoindre          #+#    #+#             */
/*   Updated: 2022/10/30 12:56:58 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;

	str = NULL;
	if (start > ft_strlen(s))
	{
		len = 0;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>

int main()
{	
	size_t test = SIZE_MAX;

	printf("test = %lu", test);
	/*
	printf("ICI SIZE_MAX = %lu sur %lu\n", SIZE_MAX, sizeof(size_t));
	char *str = "hola";
	unsigned int start = 0;
	size_t len = 4;

	char *result = ft_substr(str, start, len);

	printf("result = %s\n", result);
	
	*/
	return 0;

}
