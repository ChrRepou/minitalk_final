/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:04:16 by crepou            #+#    #+#             */
/*   Updated: 2022/11/22 16:27:57 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	if (*str1 == '\0' && *str2 == '\0')
		n = 0;
	while (n > 0)
	{
		if ((unsigned char)*str1 > (unsigned char)*str2)
			return (1);
		if ((unsigned char)*str2 > (unsigned char)*str1)
			return (-1);
		str1++;
		str2++;
		if (*str1 == '\0' && *str2 == '\0')
			break ;
		n--;
	}
	return (0);
}
