/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:06:55 by crepou            #+#    #+#             */
/*   Updated: 2022/11/22 14:55:12 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*new_str;
	int			index;

	if (s == NULL || !f)
		return (NULL);
	index = 0;
	new_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		new_str[index] = f(index, s[index]);
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}
