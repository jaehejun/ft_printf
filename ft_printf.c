/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:48:51 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/26 22:43:10 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int	check_format(const char *format, va_list ap)
{
	int	len;
	
	len = 0;
	if (*format == 'c' || *format == 's')
		len += conv_char(format, ap);
	else if (*format == 'p')
		len += conv_pointer(*format, ap);
	else if (*format == 'd' || *format == 'i' || *format == 'u')
		len += conv_demical(ap);
	else if (*format == 'x' || *format == 'X')
		len += conv_hex(ap);
	else if (*format == '%')
	{
		write(1, "%", 1);
		len++;
	}
	format++;
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;
	
	len = 0;
	if (*format != '\0')
		va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			len += (check_format(format, ap));
		}
		write (1, format, 1);
		len++;
		format++;
	}
	va_end(ap);
	return (len);
}

int	main(void)
{
	int	a = 8;
	char	c = '!';
	char *str = "hello";
	int	result;
	printf("return : %d\n", result = ft_printf("umm %s%%c it's 5 'o clock\n", str, c));
	printf("return : %d\n", result = printf("umm %s%%%c it's 5 'o clock\n", str, c));
}
