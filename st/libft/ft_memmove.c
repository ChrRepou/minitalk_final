/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:23:04 by crepou            #+#    #+#             */
/*   Updated: 2022/11/22 14:21:32 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*p_dest;
	size_t			count;
	const char		*p;

	p_dest = dest;
	if (dest > src)
	{
		p = src + n - 1;
		count = n;
		while (count > 0)
		{
			*(p_dest + count - 1) = *p;
			p--;
			count--;
		}
	}
	else
	{
		return (ft_memcpy(dest, src, n));
	}
	return (dest);
}
