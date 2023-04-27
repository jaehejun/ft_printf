/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:39:54 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/27 22:24:23 by jaehejun         ###   ########.fr       */
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
	char	*str;

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
	void	*ptr;
	
	ptr = va_arg(ap, void *);
	len = ft_putptr(ptr);
	return (len);
}

int	conv_demical(char *format, va_list ap)
{
	int		len;
	long	number;
	
	if (*format == 'd' || *format == 'i')
	{
		number = va_arg(ap, int);
		len += ft_putnbr(number);
	}
	else if (*format == 'u')
	{
		number = va_arg(ap, unsigned int);
		len += ft_putnbr(number);
	}
}

void	conv_hex(char *format, va_list ap)
{
	int				len;
	unsigned int	number;
	
	number = va_arg(ap, unsigned int);
	len += ft_puthex(number);

}
