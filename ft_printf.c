/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:48:51 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/14 19:58:53 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	check_format(char *format, )
{
	if (format == %c)
		ft_putchar();
	else if (format == %s)
		ft_putstr();
	else if (format == %p)
		write()
	else if (format == %d)
		write()
	else if (format == %i)
		write()
	else if (format == %u)
		write()
	else if (format == %x)
		write()
	else if (format == %X)
		write()
	else if (format == %%)
		write(1, "%", 1);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;

	va_start(ap, format)
	va_arg(ap, )


	va_end()
}



int	count;
error check() // %ㄲㅏ지 밀고 %찾으면 그 뒤에 유효한 format이 있는지 검사
va_start() // 고정된 char* 밀고 첫번째 가변인자의 시작주소를 가리킴
%찾고 뒤의 포멧에 따라 
해당 함수로 가서(ft_conversion()) malloc 후 출력, 반환할 count++;
va_end()
return (cnt);;