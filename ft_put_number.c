/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:24:16 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/27 20:43:00 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	len_number(long n)
{
	int	len;

	len = 1;
	//if (n <= 0)
	//{
	//	n *= -1;
	//	len++;
	//}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		len;
	long	number;

	number = (long)n;
	len = len_number(number);
	itoa = (char *)malloc(sizeof(char) * (len + 1));
	if (itoa == 0)
		return (NULL);
	itoa[len] = '\0';
	if (number == 0)
		itoa[0] = '0';
	//if (number < 0)
	//{
	//	itoa[0] = '-';
	//	number *= -1;
	//}
	while (number > 0)
	{
		itoa[--len] = number % 10 + '0';
		number = number / 10;
	}
	return (itoa);
}

int	ft_putchar(char nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}