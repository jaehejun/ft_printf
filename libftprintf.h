/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:04:04 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/26 22:43:19 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	check_format(const char *format, va_list ap);
int	conv_char(const char *format, va_list ap);
int	conv_pointer(char *format, va_list ap);
int	conv_demical(char *format, va_list ap);
void	conv_hex(va_list ap);
int	ft_putchar(char c);
int	ft_putstr(char *str);

#endif
