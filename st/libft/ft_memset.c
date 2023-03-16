/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:13:46 by crepou            #+#    #+#             */
/*   Updated: 2022/11/22 14:27:25 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t		count;
	void		*str_cp;

	str_cp = str;
	count = 0;
	while (count < n)
	{
		*(char *) str_cp = c;
		str_cp++;
		count++;
	}
	return (str);
}
