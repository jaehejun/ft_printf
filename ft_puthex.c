/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:24:16 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/08 18:33:38 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_len(unsigned int ap_num)
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

int	ft_putnbr_base(unsigned int ap_num, char *base)
{
	if (ap_num >= 16)
	{
		if (ft_putnbr_base(ap_num / 16, base) == -1)
			return (-1);
	}
	if (write(1, &base[ap_num % 16], 1) == -1)
		return (-1);
	return (0);
}

int	ft_puthex(unsigned int ap_num, char format)
{
	int			len;
	char		*base_low;
	char		*base_upp;

	base_low = "0123456789abcdef";
	base_upp = "0123456789ABCDEF";
	if (format == 'x')
		len = ft_putnbr_base(ap_num, base_low);
	if (format == 'X')
		len = ft_putnbr_base(ap_num, base_upp);
	if (len == -1)
		return (-1);
	len = hex_len(ap_num);
	return (len);
}
