/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:37:08 by crepou            #+#    #+#             */
/*   Updated: 2022/11/25 17:19:30 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	*p;
	char	*last;

	last = 0;
	p = (char *)str;
	while (*str != '\0')
	{
		if (*p == (char)c)
			last = p;
		if (!*p)
		{
			if (last)
				return (last);
			return (0);
		}
		p++;
	}
	if (*p == c)
		return (p);
	return (last);
}
