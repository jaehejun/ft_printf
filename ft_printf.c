/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:48:51 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/02 21:59:00 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	check_format(const char *format, va_list ap)
{
	int	len;

	if (*format == 'c')
		len = ft_putchar((unsigned char)va_arg(ap, int));
	else if (*format == 's')
		len = ft_putstr(va_arg(ap, char *));
	else if (*format == 'p')
		len = ft_putptr(va_arg(ap, void *));
	else if (*format == 'd' || *format == 'i')
		len = ft_putnbr(va_arg(ap, int));
	else if (*format == 'u')
		len = ft_putnbr(va_arg(ap, unsigned int));
	else if (*format == 'x' || *format == 'X')
		len = ft_puthex(va_arg(ap, unsigned int), *format);
	else if (*format == '%')
		len = ft_putchar('%');
	else
		len = -1;
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
			len += (check_format(++format, ap));
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (len);
}

int	main(void)
{
	char	a = 'c';
	char	*b = "string";
	int		c = 545;
	int		*cc = &c;
	int		d = 100;
	int	result;
	printf("c : %c\n s : %s\n p : %p\n d : %d\n i : %i\n u : %u\n x : %x\n X : %X\n", a, b, );
	printf("return : %d\n", result = printf("umm %s%c it's 5 'o clock\n", str, c));
}
