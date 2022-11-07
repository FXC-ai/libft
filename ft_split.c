/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:47:32 by fcoindre          #+#    #+#             */
/*   Updated: 2022/11/07 12:07:20 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char *str, char c)
{
	int	word_count;
	int	i;
	int	word_check;

	i = 0;
	word_count = 0;
	word_check = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
			word_check++;
		if (str[i] == c && word_check > 0)
		{
			word_count++;
			word_check = 0;
		}
		i++;
	}
	if (word_check > 0)
	{
		word_count++;
	}
	return (word_count);
}

static int	ft_size_word(int index, char *str, char c)
{
	int		count;
	int		index_ini;

	index_ini = index;
	count = 0;
	while (str[index] != '\0' && str[index] != c)
	{
		index++;
	}
	count = index - index_ini;
	return (count);
}

static char	*ft_cpy_word(int i, int size_word, char *str)
{
	char	*word;
	int		j;

	word = malloc((size_word + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	j = 0;
	while (j < size_word)
	{
		word[j] = str[i];
		j++;
		i++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str, char c)
{
	int		h;
	int		i;
	char	**tab;
	int		size_word;
	int		word_count;

	word_count = ft_word_count(str, c);

	tab = malloc(sizeof(char *) * (word_count + 1));
	if (tab == NULL)
		return (NULL);

	h = 0;
	i = 0;
	while (h < word_count)
	{
		size_word = ft_size_word(i, str, c);
		if (size_word > 0)
		{	
			tab[h] = ft_cpy_word(i, size_word, str);
			i += size_word;
			h++;
		}
		i ++;
	}
	tab[h] = NULL;
	return (tab);
}


#include <stdio.h>

int main()
{

	char **tab = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
	
	int i = 0;

	while (tab[i] != 0)
	{
		printf("tab[%d] = \"%s\"\n", i, tab[i]);
		free(tab[i]);
		i++;
	}

	printf("tab[%d] = \"%s\"\n", i, tab[i]);

	free(tab);

	return (0);

}