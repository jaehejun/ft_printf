/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:39:54 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/25 22:33:36 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int	conv_chars(char *format, va_list ap)
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

cspdiuxX%

int	conv_pointer(char *format, va_list ap)
{
	char **ptr;

	ptr = &ap;
	
}

int	conv_demicals(char *format, va_list ap)
{
	int	number;

	number = 0;
	if ()
}

void	conv_hexs(va_list ap)
{

}
