/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uangelik <uangelik@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:01:45 by uangelik          #+#    #+#             */
/*   Updated: 2021/11/19 14:36:06 by uangelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			j += ft_print_param(str[i + 1], ap);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			j++;
		}
		i++;
	}
	va_end(ap);
	return (j);
}