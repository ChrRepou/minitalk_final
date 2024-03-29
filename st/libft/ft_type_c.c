/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:18:40 by crepou            #+#    #+#             */
/*   Updated: 2023/01/20 10:55:55 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_type_c(va_list args)
{
	char	c;
	int		erval;

	c = (char)va_arg(args, int);
	erval = write(1, &c, 1);
	if (erval == -1)
		return (erval);
	return (1);
}
