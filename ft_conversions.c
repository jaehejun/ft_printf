/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:39:54 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/24 22:01:17 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int	conv_chars(char *format, va_list ap)
{
	int	len;

	len = 0;
	if (*format == 'c')
	{
		write(1, ap, 1);
		va_arg(ap, int);
	}
	else if (*format == 's')
	{
		len = ft_strlen()
		write(1, format, len);
	}
}

cspdiuxX%

void	conv_pointer(va_list ap)
{
	char **ptr;

	ptr = &ap;
	
}

void	conv_demicals(va_list ap)
{
	
}

void	conv_hexs(va_list ap)
{

}
