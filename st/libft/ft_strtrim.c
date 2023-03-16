/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:20:29 by crepou            #+#    #+#             */
/*   Updated: 2022/11/19 12:26:29 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim_left(char const **start, int count, char const *set)
{
	const char	*s;
	int			flag;

	while (count > 0)
	{
		s = set;
		flag = 0;
		while (*s != '\0')
		{
			if (*s == **start)
			{
				(*start)++;
				count--;
				flag = 1;
			}
			s++;
		}
		if (flag == 0)
			break ;
	}
	return (count);
}

static int	ft_trim_right(char const **start, int count, char const *set)
{
	const char	*s;
	int			flag;

	while (count > 0)
	{
		s = set;
		flag = 0;
		while (*s != '\0' && count > 0)
		{
			if (*s == **start)
			{
				(*start)--;
				count--;
				flag = 1;
			}
			s++;
		}
		if (flag == 0)
			break ;
	}
	(*start)++;
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*end;
	int			cs;
	int			ce;
	char		*new_str;
	char		*nst;

	end = s1 + ft_strlen(s1) - 1;
	ce = ft_trim_right(&end, ft_strlen(s1) - (ft_strlen(s1) / 2), set);
	cs = ft_trim_left(&s1, ft_strlen(s1) / 2, set);
	new_str = (char *)malloc(cs + ce + 1);
	if (new_str == NULL)
		return (NULL);
	nst = new_str;
	while (s1 != end)
	{
		*new_str = *s1;
		s1++;
		new_str++;
	}
	*new_str = '\0';
	return (nst);
}
