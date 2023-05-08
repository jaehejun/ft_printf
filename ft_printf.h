/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:04:04 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/08 15:37:27 by jaehejun         ###   ########.fr       */
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
int	ptr_len(unsigned long long address);
int	ft_putptr_base(unsigned long long address, char *base);

int	nbr_len(long long ap_num);
int	ft_putnbr(int ap_num);

int	unsigned_nbr_len(unsigned int ap_num);
int	ft_put_unsigned_nbr(unsigned int ap_num);

int	hex_len(unsigned int ap_num);
int	ft_putnbr_base(unsigned int ap_num, char *base);
int	ft_puthex(unsigned int ap_num, char format);

#endif
