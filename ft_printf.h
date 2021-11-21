/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uangelik <uangelik@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:47:37 by uangelik          #+#    #+#             */
/*   Updated: 2021/11/19 19:50:52 by uangelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>



int			ft_printf(const char *format, ...);
int putnbr_base(int num, char *base);
int ft_case_c(va_list ap);
int ft_case_di(va_list ap);
int	ft_case_p(va_list ap);
int ft_case_s(va_list ap);
int ft_case_u(int num);
void ft_putchar(char c);
void ft_putnbr(long num);
int numlen(long num);
int put_base(unsigned long num, char *base);
int ft_print_param(char param, va_list ap);

#endif