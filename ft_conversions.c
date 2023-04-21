/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:39:54 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/21 16:03:31 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	conv_chars(va_list ap)
{
	size_t	len;

	if (va_arg(ap, type) == char)
		write(1, format, 1);
	else if (va_arg(ap, type) == char *)
	{
		len = ft_strlen(format)
		write(1, format, len);
	}
}

void	conv_pointer(va_list ap)
{
	char **ptr;

	ptr = &ap;
	
}

void	conv_demicals(va_list ap)
{
	
}

void	conv_hexs(va_list ap)
{

}
