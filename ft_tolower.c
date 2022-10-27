/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:50:18 by fcoindre          #+#    #+#             */
/*   Updated: 2022/10/27 14:30:44 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	cc;

	cc = (unsigned char) c;
	if (cc >= 'A' && cc <= 'Z')
	{
		return (cc + 32);
	}
	return (cc);
}