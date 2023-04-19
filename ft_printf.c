/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:48:51 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/19 22:24:25 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	check_format(char *format, ...)
{
	while (*format != '%')
	{
		format++;
	}
	if (*format == '%')
		format++;
	if (*format == 'c' || *format == 's')
		conv_chars(ap);	
	else if (*format == 'p')
		conv_pointer(ap);
	else if (*format == 'd' || *format == 'i' || *format == 'u')
		conv_demicals(ap);
	else if (*format == 'x' || *format == 'X')
		conv_hexs(ap);
	else if (*format == '%')
		write(1, "%", 1);
	else
	{
		while (*format != '\0')
			write(1, format, 1);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	
	check_format(format);
	va_start(ap, format);
	va_end(ap);
}

#include <stdarg.h>

int	main(void)
{
	int	a = 3;
	int	b = 5;
	char	c = 'a';
	int	d = 9;

	printf("kakakakak %d, asl;kj %d, %d ;alskfj %c", a, b, d, c "and this? %d", d);
}

int	count;
error check() // %ㄲㅏ지 밀고 %찾으면 그 뒤에 유효한 format이 있는지 검사
va_start() // 고정된 char* 밀고 첫번째 가변인자의 시작주소를 가리킴
%찾고 뒤의 포멧에 따라 
해당 함수로 가서(ft_conversion()) malloc 후 출력, 반환할 count++;
va_end()
return (cnt);;

인인자자(argument)인수(parameter)차이 정리하기
%p 포멧 출력하는법 공부하기