/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:50:37 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/07 21:51:00 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unsigned_nbr_len(unsigned int ap_num)
{
	int	len;

	len = 0;
	while (ap_num / 10 > 0)
	{
		ap_num = ap_num / 10;
		len++;
	}
	return (len + 1);
}

int	ft_put_unsigned_nbr(unsigned int ap_num)
{
	int	len;

	if (ap_num >= 10)
		ft_put_unsigned_nbr(ap_num / 10);
	if (ft_putchar(ap_num % 10 + '0') == -1)
		return (-1);
	len = unsigned_nbr_len(ap_num);
	return (len);
}
