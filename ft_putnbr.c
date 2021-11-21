/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uangelik <uangelik@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:19:48 by uangelik          #+#    #+#             */
/*   Updated: 2021/11/19 14:36:26 by uangelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr(long num)
{
    if(num < 0)
    {
        ft_putchar('-');
        num = -num;
    }
    if (num < 10)
        ft_putchar(num + '0');
    else
    {
        ft_putnbr(num/10);
        ft_putnbr(num%10);
    }
}