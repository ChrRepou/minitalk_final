/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:03:04 by crepou            #+#    #+#             */
/*   Updated: 2022/11/25 17:27:13 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *p, size_t len)
{
	size_t	count;

	count = 0;
	while ((*p != '\0') && (count < len))
	{
		count++;
		p++;
	}
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		count;
	char		*sub;
	size_t		i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	count = ft_count(s + start, len);
	sub = (char *)malloc(count + 1);
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
