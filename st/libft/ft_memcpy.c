/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:48:14 by crepou            #+#    #+#             */
/*   Updated: 2022/11/25 15:00:56 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			count;
	void			*p;

	count = 0;
	p = dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (count < n)
	{
		*(char *) p = *(const char *) src;
		p++;
		src++;
		count++;
	}
	return (dest);
}
