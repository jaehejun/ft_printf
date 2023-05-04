/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:04:04 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/04 20:43:42 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	check_format(char format, va_list ap);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putptr(void *ptr);
int	ft_puthex(unsigned int nbr, char format);
int	putnbr_len(long long number);
int	ft_putnbr(int nbr);
int	ft_put_unsigned_nbr(unsigned int nbr);
int	putnbr_base_len(unsigned long long number);
int	ft_putnbr_base(unsigned long long number, char *base);

#endif
