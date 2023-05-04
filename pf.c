/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:52:18 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/04 22:53:56 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	if (*format != '\0')
		va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (check_format(*(++format), ap) == -1)
				return (-1);
			len += check_format(*(++format), ap);
		}
		else
		{
			if (ft_putchar(*format) == -1)
				return (-1);
			len += ft_putchar(*format);
		}
		format++;
	}
	va_end(ap);
	return (len);
}