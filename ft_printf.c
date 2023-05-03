/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:48:51 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/03 19:43:12 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	check_format(char format, va_list ap)
{
	int	len;

	if (format == 'c')
		len = ft_putchar((unsigned char)va_arg(ap, int));
	else if (format == 's')
		len = ft_putstr(va_arg(ap, char *));
	else if (format == 'p')
		len = ft_putptr(va_arg(ap, void *));
	else if (format == 'd' || format == 'i')
		len = ft_putnbr(va_arg(ap, int));
	else if (format == 'u')
		len = ft_putnbr(va_arg(ap, unsigned int));
	else if (format == 'x' || format == 'X')
		len = ft_puthex(va_arg(ap, unsigned int), format);
	else if (format == '%')
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
			len += (check_format(*(++format), ap));
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (len);
}

#include <stdio.h>

int	main(void)
{
	char	a = 'c';
	char	*b = "string";
	int		c = 545;
	int		*cc = &c;
	int		d = 100;
	int	result;
	printf("P_len : %d\n", printf("c : %c\n",  a));
	ft_printf("f_len : %d\n", ft_printf("c : %c\n", a));
	printf("P_len : %d\n", printf("s : %s\n", b));
	ft_printf("f_len : %d\n", ft_printf("s : %s\n", b));
	printf("P_len : %d\n", printf("d : %d\n", c));
	ft_printf("f_len : %d\n", ft_printf("d : %d\n", c));
	printf("P_len : %d\n", printf("i : %i\n", d));
	ft_printf("f_len : %d\n", ft_printf("i : %i\n", d));
	printf("P_len : %d\n", printf("u : %u\n", d));
	ft_printf("f_len : %d\n", ft_printf("u : %u\n", d));
	printf("P_len : %d\n", printf("x : %x\n", d));
	ft_printf("f_len : %d\n", ft_printf("x : %x\n", d));
	printf("P_len : %d\n", printf("X : %X\n", d));
	ft_printf("f_len : %d\n", ft_printf("X : %X\n", d));
	printf("P_len : %d\n", printf("p : %p\n", cc));
	ft_printf("f_len : %d\n", ft_printf("p : %p\n", cc));
	printf("P_len : %d\n", printf("%% : %%\n"));
	ft_printf("f_len : %d\n", ft_printf("%% : %%\n"));
}
