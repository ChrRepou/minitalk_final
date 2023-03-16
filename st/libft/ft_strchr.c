/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:22:43 by crepou            #+#    #+#             */
/*   Updated: 2022/11/25 16:59:27 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
char	*ft_strchr --> returns a pointer to the first occurrence of c in str
*/

char	*ft_strchr(const char *str, int c)
{
	char	*p;

	p = (char *)str;
	while (str++)
	{
		if (*p == (char )c)
			return (p);
		if (!*p)
			return (0);
		p++;
	}
	if (*p == (char)c)
		return (p);
	return (0);
}
