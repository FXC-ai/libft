/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:19:27 by fcoindre          #+#    #+#             */
/*   Updated: 2022/10/27 14:47:58 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
    unsigned char	cc;
	
    cc = (unsigned char)	c;
	if (cc >= 32 && cc < 127)
	{
		return (1);
	}
	return (0);
}