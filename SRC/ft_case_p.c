/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uangelik <uangelik@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:47:46 by uangelik          #+#    #+#             */
/*   Updated: 2021/11/19 16:02:43 by uangelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case_p(va_list ap)
{
	size_t	p;

	p = (size_t)(va_arg(ap, void *));
	ft_putchar('0');
	ft_putchar('x');
	return (2 + put_base(p, "0123456789abcdef"));
}

