/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uangelik <uangelik@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:20:32 by uangelik          #+#    #+#             */
/*   Updated: 2021/11/19 14:36:31 by uangelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int numlen(long num)
{
    int i = 0;
    if(num == 0)
        return (1);
    if(num < 0)
    {
        num = -num;
        i++;
    }
    while(num)
    {
        num = num/10;
        i++;
    }
    return (i);
}