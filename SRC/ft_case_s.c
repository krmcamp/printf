/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uangelik <uangelik@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:21:40 by uangelik          #+#    #+#             */
/*   Updated: 2021/11/19 14:35:48 by uangelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_case_s(va_list ap)
{
    int i = 0;
    int j = 0;
    char *s = va_arg(ap, char *);

    if (!s)
    {
        ft_putchar('(');
        ft_putchar('n');
        ft_putchar('u');
        ft_putchar('l');
        ft_putchar('l');
        ft_putchar(')');
        return (6);
    }
    while(s[j])
    {
        ft_putchar(s[j]);
        j++;
        i++;
    }
    return (i);
}