/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:18:18 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/07 21:57:33 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr_len(unsigned long long address)
{
	int	len;

	len = 0;
	while (address / 16 > 0)
	{
		address = address / 16;
		len++;
	}
	return (len + 1);
}

int	ft_putptr_base(unsigned long long address, char *base)
{
	if (address >= 16)
		ft_putptr_base(address / 16, base);
	if (write(1, &base[address % 16], 1) == -1)
		return (-1);
	return (0);
}

int	ft_putptr(void *ptr)
{
	int					len;
	unsigned long long	address;
	char				*base_ptr;

	if (write(1, "0x", 2) == -1)
		return (-1);
	base_ptr = "0123456789abcdef";
	address = (unsigned long long)ptr;
	len = ft_putptr_base(address, base_ptr);
	if (len == -1)
		return (-1);
	len = ptr_len(address);
	return (len + 2);
}
