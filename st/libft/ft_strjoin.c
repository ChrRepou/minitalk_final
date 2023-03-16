/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:30:30 by crepou            #+#    #+#             */
/*   Updated: 2022/11/22 14:43:36 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	p = str;
	while (*s1 != '\0')
	{
		*p = *s1;
		p++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*p = *s2;
		p++;
		s2++;
	}
	*p = '\0';
	return (str);
}
