/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:39:54 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/26 22:45:39 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int	conv_char(const char *format, va_list ap)
{
	int		len;
	char	c;
	char *	str;

	len = 0;
	if (*format == 'c')
	{
		c = (char)va_arg(ap, int);
		len = ft_putchar(c);
	}
	else if (*format == 's')
	{
		str = va_arg(ap, char *);
		len = ft_putstr(str);
	}
	return (len);
}

int	conv_pointer(char *format, va_list ap)
{
	int		len;
	void *	ptr;
	
	ptr = va_arg(ap, void *);
	len = ft_putptr(ptr);
	return (len);
}

int	conv_demical(char *format, va_list ap)
{
	int			len;
	long long	number;
	
	if (*format == 'd')
	{
		number = va_arg(ap, int);
		ft_putnbr(number)
	}

	number = 0;
	if ()
}

void	conv_hex(va_list ap)
{

}
