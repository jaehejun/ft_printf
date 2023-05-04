/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:24:16 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/04 20:46:57 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr_len(long long number)
{
	int	len;

	len = 0;
	if (number < 0)
	{
		number *= -1;
		len++;
	}
	while (number / 10 > 0)
	{
		number = number / 10;
		len++;
	}
	return (len + 1);
}

int	ft_putnbr(int nbr)
{
	int			len;
	long long	number;

	number = (long long)nbr;
	if (number < 0)
	{
		number *= -1;
		ft_putchar('-');
	}
	if (number >= 10)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + '0');
	len = putnbr_len(nbr);
	return (len);
}

int	ft_put_unsigned_nbr(unsigned int nbr)
{
	int					len;
	unsigned long long	number;

	number = (unsigned long long)nbr;
	if (number >= 10)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + '0');
	len = putnbr_len(nbr);
	return (len);
}

int	putnbr_base_len(unsigned long long number)
{
	int	len;

	len = 0;
	while (number / 16 > 0)
	{
		number = number / 16;
		len++;
	}
	return (len + 1);
}

int	ft_putnbr_base(unsigned long long number, char *base)
{
	int	len;

	if (number >= 16)
		ft_putnbr_base(number / 16, base);
	if (write(1, &base[number % 16], 1) == -1)
		return (-1);
	len = putnbr_base_len(number);
	return (len);
}
