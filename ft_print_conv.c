/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:10:35 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/03 22:51:22 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
int	ft_putnbr_base(unsigned long long number, char *base);

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
		len = 4;
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
	int					len;
	unsigned long long	address;
	char				*base_low; 

	if (write(1, "0x", 2) == -1)
		return(-1);
	base_low = "0123456789abcdef";
	address = (unsigned long long)ptr;
	len = ft_putnbr_base(address, base_low);
	if (len == -1)
		return (-1);
	return (len + 2);
}

int	ft_puthex(unsigned int nbr, char format)
{
	int					len;
	unsigned long long	number;
	char				*base_low;
	char				*base_upp;

	number = (unsigned long long)nbr;
	base_low = "0123456789abcdef";
	base_upp = "0123456789ABCDEF";

	if (format == 'x')
		len = ft_putnbr_base(number, base_low);
	if (format == 'X')
		len = ft_putnbr_base(number, base_upp);
	return (len);
}
