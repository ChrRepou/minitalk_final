/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:18:45 by crepou            #+#    #+#             */
/*   Updated: 2022/11/25 16:48:23 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static int	ft_count_substrings --> counts the substrings that will be created 
after the split function so as to be able to malloc the right space;

@params char const *s --> a pointer to the string that we want to split
@params char c --> the delimiter
**********************************************************************
static int	ft_size --> calculates the size of a substring 

@params char const *s --> a pointer to the string that we want to split
@params char c --> the delimiter
**********************************************************************
static char	*ft_fill_up_str --> fills a new string with the current 
substring and returns this new string

static char	**ft_free_mem --> frees the memory of every substring created
and also the pointer on the new list of substrings

@params char **final --> the array of pointers to substrings after split
@params int index --> the number of substrings already exist in final
*/

static int	ft_count_substrings(char const *s, char c)
{
	int			count;
	char const	*p;

	count = 0;
	if (*s != c)
		count++;
	while (*s != '\0')
	{
		p = s + 1;
		if (*s == c && *p != '\0' && *p != c)
			count++;
		s++;
	}
	return (count + 1);
}

static int	ft_size(char const **s, char c)
{
	int			count;
	char const	*str;

	count = 0;
	str = *s;
	while (*str != '\0' && *str != c)
	{
		count++;
		str++;
	}
	return (count);
}

static char	*ft_fill_up_str(char const **s, int c, int *idx)
{
	char	*str;
	int		size;
	int		i;

	size = ft_size(s, c);
	str = (char *)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = **s;
		i++;
		(*s)++;
	}
	str[i] = '\0';
	(*idx)++;
	return (str);
}

static char	**ft_free_mem(char **final, int index)
{
	while (index >= 0)
	{
		free(final[index]);
		index--;
	}
	free(final);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**final;
	int			count;
	int			i;

	count = ft_count_substrings(s, c);
	if (!ft_isprint(c) && !(c >= 9 && c <= 13) && *s != '\0' && c != 0)
		return (NULL);
	final = (char **)malloc(sizeof(char *) * count);
	if (final == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0' && i < (count + 1))
	{
		if (*s != c)
		{
			final[i - 1] = ft_fill_up_str(&s, c, &i);
			if (!final[i - 1])
				return (ft_free_mem(final, i - 1));
			s--;
		}
		s++;
	}
	final[i] = NULL;
	return (final);
}
