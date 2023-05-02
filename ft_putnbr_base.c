/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:24:16 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/02 21:24:14 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	nbr_len(unsigned long long number)
{
	int	len;

	len = 0;
	while (number / 16 > 0)
	{
		number = number / 16;
		len++;
	}
	return (len);
}
int	ft_putnbr_base(unsigned long long number, char *base)
{
	int	len;
	
	len = nbr_len(number);
	if (number >= 16)
		ft_putnbr_base(number / 16, base);
	if (write(1, &base[number % 16], 1) == -1)
		return (-1);
	return (len);
}

int	main(void)
{
	unsigned long number = 2147483648999999;
	char *base = "0123456789abcdef";
	printf("putnbr : %d\n", ft_putnbr_base(number, base));
	printf("number : %d\n", number);
}
