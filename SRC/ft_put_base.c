/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_base.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uangelik <uangelik@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:13:47 by uangelik          #+#    #+#             */
/*   Updated: 2021/11/19 15:20:09 by uangelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int put_base(unsigned long num, char *base)
{
    int c = 0;
    if(num >= 16)
        c = put_base(num / 16, base);
    c++;
    ft_putchar(base[num % 16]);
	return (c);
}
