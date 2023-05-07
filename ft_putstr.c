/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:17:36 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/07 21:17:53 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (str == NULL)
	{
		len = write(1, "(null)", 6);
		if (len == -1)
			return (-1);
		return (len);
	}
	while (*str != '\0')
	{
		if (write(1, str, 1) == -1)
			return (-1);
		str++;
		len++;
	}
	return (len);
}
