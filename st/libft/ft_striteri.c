/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:05:24 by crepou            #+#    #+#             */
/*   Updated: 2022/11/22 14:41:14 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	index;

	index = 0;
	if (!f || !s)
		return ;
	while (s[index] != '\0')
	{
		f(index, &s[index]);
		index++;
	}
}
