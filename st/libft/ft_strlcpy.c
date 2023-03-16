/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:16:25 by crepou            #+#    #+#             */
/*   Updated: 2022/11/22 16:27:28 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;
	int		ret_val;

	count = 0;
	ret_val = ft_strlen(src);
	while (count < size - 1)
	{
		if (*src == '\0' || size == 0)
			break ;
		*dst = *src;
		dst++;
		src++;
		count++;
	}
	if (size != 0)
		*dst = '\0';
	return (ret_val);
}
