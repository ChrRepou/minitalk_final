/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:16:38 by crepou            #+#    #+#             */
/*   Updated: 2023/01/20 10:57:05 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_type_s(va_list args)
{
	char	*s;
	int		erval;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		erval = ft_print_null();
		if (erval == -1)
			return (erval);
		return (6);
	}
	erval = write(1, s, ft_strlen(s));
	if (erval == -1)
		return (erval);
	return (ft_strlen(s));
}
