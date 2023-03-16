/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:50:26 by crepou            #+#    #+#             */
/*   Updated: 2022/11/22 14:16:38 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		if (*(const unsigned char *)str1 != *(const unsigned char *)str2)
			return (*(const unsigned char *)str1 - \
			*(const unsigned char *)str2);
		str1++;
		str2++;
		count++;
	}
	return (0);
}
