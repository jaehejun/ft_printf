/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:10:35 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/28 21:14:50 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(unsigned char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (*str == '\0')
	{
		if (write(1, "null", 4) == -1)
			return (-1);
		len += 4;
	}
	while (*str != '\0')
	{
		if (write(1, str, 1) == -1)
			return (-1);
		str++;
		len++;
	}
	return (len);
}

int	ft_putptr(void *ptr)
{
	int				len;
	unsigned long	address;
	char			*number;

	write(1, "0x", 2);
	len += 2;
	address = (unsigned long long)ptr;
	number = ft_itoa(address);
	len += ft_putstr(number);
	return (len);
}

int	ft_putnbr(int nbr)
{
	int			len;
	long long	number;

	number = (long long)nbr;
	if (number < 0)
	{
		number *= -1;
		len += ft_putchar('-');
	}
	if (number >= 10)
		ft_putnbr(number / 10);
	len += ft_putchar(number % 10 + '0');
	return (len);
}

int	ft_puthex(unsigned int nbr, const char *format)
{
	int					len;
	unsigned long long	number;
	char				*base_low;
	char				*base_upp;

	len = 0;
	number = (unsigned long long)nbr;
	base_low = "0123456789abcdef";
	base_upp = "0123456789ABCDEF";
	
	write(1, "0x", 2);
	len += 2;
	if (number >= 16)
		ft_puthex(number / 16);
	if (*format == 'x')
		ft_putchar(base_low[number % 16]);
	ft_putchar(base_upp[number % 16]);
}
