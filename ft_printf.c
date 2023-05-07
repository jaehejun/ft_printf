/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:48:51 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/07 22:44:25 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

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
		len = ft_putchar(format);
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

//int	main(void)
//{
//	char	a = 255;
	//char	*b = "";
	//int		c = 0;
	//int		*cc = &c;
	//int		d = 2147483647;
	//printf("P_len : %d\n", printf("c : %c\n",  a));
	//ft_printf("f_len : %d\n", ft_printf("c : %c\n", a));
	//if ((printf("c : %c\n", a)) == ft_printf("c : %c\n", a))
	//	printf("same result\n");
	//else
	//	printf("diff\n");
	//printf("P_len : %d\n", printf("s : %s\n", (char *)NULL));
	//ft_printf("f_len : %d\n", ft_printf("s : %s\n", (char *)NULL));
	//if ((printf("s : %s\n", (char *)NULL)) == ft_printf("s : %s\n", (char *)NULL))
	//	printf("same result\n");
	//else
	//	printf("diff\n");
	//printf("P_len : %d\n", printf("d : %d\n", c));
	//ft_printf("f_len : %d\n", ft_printf("d : %d\n", c));
	//printf("P_len : %d\n", printf("i : %i\n", d));
	//ft_printf("f_len : %d\n", ft_printf("i : %i\n", d));
	//printf("P_len : %d\n", printf("u : %u\n", d));
	//ft_printf("f_len : %d\n", ft_printf("u : %u\n", d));
	//printf("P_len : %d\n", printf("x : %x\n", d));
	//ft_printf("f_len : %d\n", ft_printf("x : %x\n", d));
	//printf("P_len : %d\n", printf("X : %X\n", d));
	//ft_printf("f_len : %d\n", ft_printf("X : %X\n", d));
	//printf("P_len : %d\n", printf("p : %p\n", cc));
	//ft_printf("f_len : %d\n", ft_printf("p : %p\n", cc));
	//printf("P_len : %d\n", printf("%%% \n: %%%\n"));
	//ft_printf("f_len : %d\n", ft_printf("%%% \n: %%%\n"));
//}

//int	main(void)
//{
//	printf("P_len : %d\n", printf("d : %d\n", a));
//	ft_printf("f_len : %d\n", ft_printf("d : %d\n", a));
//	if (printf("d : %d\n", a) == ft_printf("d : %d\n", a))
//		printf("same result\n");
//	else
//		printf("diff\n");
	//if (printf("%c\n", 255) == ft_printf("%c\n", -128))
	//printf("%s", "same\n");
//	int a = 2147483647;
//	printf("ORI : %d\n", printf("%x\n", a));
//	printf("FTP : %d\n", ft_printf("%x\n", a));
//}