/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:32:50 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/19 22:29:13 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	main(void)
{
	int	a = 3;
	int	b = 5;
	char	c = 'a';
	int	d = 9;

	printf("kakakakak %d, asl;kj %d, %d ;alskfj %c\n" "how about %d this?", a, b, d, c, d);
}