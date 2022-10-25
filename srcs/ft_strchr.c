/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:09:10 by fcoindre          #+#    #+#             */
/*   Updated: 2022/10/25 17:07:00 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char		caract;
	int			i;

	i = 0;
	caract = c;
	while (s[i] != '\0')
	{
		if (s[i] == caract)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	return (NULL);
}
