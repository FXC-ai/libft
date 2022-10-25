/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:50:45 by fcoindre          #+#    #+#             */
/*   Updated: 2022/10/25 17:06:51 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libc.h>

char	*ft_strrchr(const char *s, int c)
{
	char		caract;
	int			i;

	i = 0;
	caract = c;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == caract)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}
