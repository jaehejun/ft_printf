/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:48:51 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/09 16:37:30 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(char format, va_list ap)
{
	int	len;

	if (format == 'c')
		len = ft_putchar((char)va_arg(ap, int));
	else if (format == 's')
		len = ft_putstr(va_arg(ap, char *));
	else if (format == 'p')
		len = ft_putptr(va_arg(ap, void *));
	else if (format == 'd' || format == 'i')
		len = ft_putnbr(va_arg(ap, int));
	else if (format == 'u')
		len = ft_put_unsigned_nbr(va_arg(ap, unsigned int));
	else if (format == 'x' || format == 'X')
		len = ft_puthex(va_arg(ap, unsigned int), format);
	else if (format == '%')
		len = ft_putchar('%');
	else
		return (0);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;
	int		check_error;

	len = 0;
	if (*format != '\0')
		va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			check_error = check_format(*(++format), ap);
			if (check_error == -1)
				return (-1);
			len += check_error;
			format++;
			continue ;
		}
		check_error = write(1, format++, 1);
		if (check_error == -1)
			return (-1);
		len += check_error;
	}
	va_end(ap);
	return (len);
}
