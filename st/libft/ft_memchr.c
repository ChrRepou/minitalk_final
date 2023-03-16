/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:59:13 by crepou            #+#    #+#             */
/*   Updated: 2022/11/25 14:57:53 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	*ft_memchr --> returns the first occurrence of char cin the string str
we cast c into unsigned char cause a negative integer will be converted to a 
very big positive number that is out of the ascii table

@params const void *str --> string that we search
@params int c --> a character that we want to find
@params size_t n --> until which character of the str we want to search
*/

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t					count;
	const unsigned char		*p;

	count = 0;
	p = (const unsigned char *)str;
	while (count < n)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
		count++;
	}
	return (0);
}
