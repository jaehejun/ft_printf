/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ori_pf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:54:04 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/04 22:54:06 by jaehejun         ###   ########.fr       */
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
			len += (check_format(*(++format), ap));
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (len);
}