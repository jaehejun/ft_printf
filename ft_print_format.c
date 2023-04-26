/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:10:35 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/13 20:11:39 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
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
	int				len;
	unsigned long	address;

	write(1, "0x", 2);
	len = 2;
	address = ptr;


}