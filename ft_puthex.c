/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:24:16 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/07 22:45:14 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_len(long long ap_num)
{
	int	len;

	len = 0;
	if (ap_num < 0)
		ap_num *= -1;
	while (ap_num / 16 > 0)
	{
		ap_num = ap_num / 16;
		len++;
	}
	return (len + 1);
}

int	ft_putnbr_base(long long number, char *base)
{
	if (number < 0)
		number *= -1;
	if (number >= 16)
		ft_putnbr_base(number / 16, base);
	if (write(1, &base[number % 16], 1) == -1)
		return (-1);
	return (0);
}

int	ft_puthex(unsigned int ap_num, char format)
{
	int			len;
	long long	number;
	char		*base_low;
	char		*base_upp;

	number = (long long)ap_num;
	base_low = "0123456789abcdef";
	base_upp = "0123456789ABCDEF";
	if (format == 'x')
		len = ft_putnbr_base(number, base_low);
	if (format == 'X')
		len = ft_putnbr_base(number, base_upp);
	if (len == -1)
		return (-1);
	len = hex_len(ap_num);
	return (len);
}
