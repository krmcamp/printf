/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uangelik <uangelik@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:15:14 by uangelik          #+#    #+#             */
/*   Updated: 2021/11/19 14:35:54 by uangelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_case_u(int num)
{
    long res = 0;
    if(num < 0)
        res = 4294967296 + num;
    else
        res = num;

    ft_putnbr(res);
    return (numlen(res));
}