/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:48:51 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/25 17:49:06 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int	check_format(char *format, va_list ap)
{
	int	len;
	
	len = 0;
	if (*format == 'c' || *format == 's')
		len += conv_chars(format, ap);
	else if (*format == 'p')
		len += conv_pointer(ap);
	else if (*format == 'd' || *format == 'i' || *format == 'u')
		len += conv_demicals(ap);
	else if (*format == 'x' || *format == 'X')
		len += conv_hexs(ap);
	else if (*format == '%')
	{
		write(1, "%", 1);
		len++;
	}
	format++;
	return (len);
}

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
			format++;
			len += (check_format(format, ap));
		}
		write (1, format, 1);
		len++;
		format++;
	}
	va_end(ap);
	return (len);
}

int	main(void)
{
	int	a = 8;
	printf("hello! it's %d 'o clock", a);
	printf(printf("hello! it's %d 'o clock", a));
}

//int	count;
//error check() // %ㄲㅏ지 밀고 %찾으면 그 뒤에 유효한 format이 있는지 검사
//va_start() // 고정된 char* 밀고 첫번째 가변인자의 시작주소를 가리킴
//%찾고 뒤의 포멧에 따라 
//해당 함수로 가서(ft_conversion()) malloc 후 출력, 반환할 count++;
//va_end()
//return (cnt);;

//인인자자(argument)인수(parameter)차이 정리하기
//%p 포멧 출력하는법 공부하기