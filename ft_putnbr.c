/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:31:35 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/07 23:19:45 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	nbr_len(long long ap_num)
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
	len = nbr_len(ap_num);
	return (len);
}
