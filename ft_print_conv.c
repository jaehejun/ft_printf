/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:10:35 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/27 22:30:20 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (*str == '\0')
		len += (write(1, "null", 4));
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
		len++;
	}
	return (len);
}

int	ft_putptr(void *ptr)
{
	int					len;
	unsigned long long	address;
	char				*number;

	write(1, "0x", 2);
	len = 2;
	address = (unsigned long long)ptr;
	number = ft_itoa(address);
	len += ft_putstr(number);
	return (len);
}

int	ft_puthex(unsigned long number)
{
	int				len;
	unsigned int	number;

	write(1, "0x", 2);
	len = 2;
	
}
