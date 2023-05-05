/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:24:16 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/05 20:01:15 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr_len(long long ap_num)
{
	int	len;

	len = 0;
	if (ap_num < 0)
	{
		ap_num *= -1;
		len++;
	}
	while (ap_num / 10 > 0)
	{
		ap_num = ap_num / 10;
		len++;
	}
	return (len + 1);
}

int	ft_putnbr(int ap_num)
{
	int			len;
	long long	number;

	number = (long long)ap_num;
	if (number < 0)
	{
		number *= -1;
		if (ft_putchar('-') == -1)
			return (-1);
	}
	if (number >= 10)
		ft_putnbr(number / 10);
	if (ft_putchar(number % 10 + '0') == -1)
		return (-1);
	len = putnbr_len(ap_num);
	return (len);
}

int	ft_put_unsigned_nbr(unsigned int ap_num)
{
	int	len;

	if (ap_num >= 10)
		ft_put_unsigned_nbr(ap_num / 10);
	if (ft_putchar(ap_num % 10 + '0') == -1)
		return (-1);
	len = putnbr_len(ap_num);
	return (len);
}

int	putnbr_base_len(long long ap_num)
{
	int	len;

	len = 0;
	while (ap_num / 16 > 0)
	{
		ap_num = ap_num / 16;
		len++;
	}
	return (len + 1);
}

int	ft_putnbr_base(long long ap_num, char *base)
{
	int	len;

	if (ap_num >= 16)
		ft_putnbr_base(ap_num / 16, base);
	if (write(1, &base[ap_num % 16], 1) == -1)
		return (-1);
	len = putnbr_base_len(ap_num);
	return (len);
}
