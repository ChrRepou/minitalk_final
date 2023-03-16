/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:32:45 by crepou            #+#    #+#             */
/*   Updated: 2022/11/22 16:26:16 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*p;
	size_t	len;
	size_t	count;

	len = ft_strlen(string);
	count = 0;
	p = (char *)malloc((len * sizeof(char)) + 1);
	if (p)
	{
		while (count < len)
		{
			p[count] = string[count];
			count++;
		}
		p[count] = '\0';
	}
	return (p);
}
