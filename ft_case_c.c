/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uangelik <uangelik@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:16:48 by uangelik          #+#    #+#             */
/*   Updated: 2021/11/19 14:52:42 by uangelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_case_c(va_list ap)
{
    ft_putchar((char)(va_arg(ap, int)));
    return (1);
}