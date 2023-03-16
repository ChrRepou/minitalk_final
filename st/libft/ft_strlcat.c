/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:08:21 by crepou            #+#    #+#             */
/*   Updated: 2022/11/25 17:02:04 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	ret_val;

	count = 0;
	if (!dst && size == 0)
		return (ft_strlen(src));
	if (size < (ft_strlen(dst) + 1))
		ret_val = ft_strlen(src) + size;
	else
		ret_val = ft_strlen(dst) + ft_strlen(src);
	while (*dst != '\0')
	{
		count++;
		dst++;
	}
	while (((count + 1) < size) && (*src != '\0'))
	{
		*dst = *src;
		dst++;
		src++;
		count++;
	}
	*dst = '\0';
	return (ret_val);
}
