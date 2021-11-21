/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uangelik <uangelik@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:01:56 by uangelik          #+#    #+#             */
/*   Updated: 2021/11/19 15:17:29 by uangelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_param(char param, va_list ap)
{
	if (param == 'c')
		return (ft_case_c(ap));
	if (param == 's')
		return (ft_case_s(ap));
	if (param == 'd' || param == 'i')
		return (ft_case_di(ap));
	if (param == 'p')
		return (ft_case_p(ap));
	if (param == 'u')
		return (ft_case_u(va_arg(ap, int)));
	if (param == 'x')
		return (putnbr_base(va_arg(ap, int), "0123456789abcdef"));
	if (param == 'X')
		return (putnbr_base(va_arg(ap, int), "0123456789ABCDEF"));
	if (param == '%')
	{
		ft_putchar(param);
		return (1);
	}
	return (0);
}