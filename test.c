/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:32:50 by jaehejun          #+#    #+#             */
/*   Updated: 2023/05/02 19:40:05 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	main(void)
{
	unsigned int		a = 131415;
	unsigned long long	b = 131415;
	void				*ptr = &b;
	
	printf("a : %x\n, b : %llx\n ptr : %p\n", a, b, ptr);
}
//int	main(void)
//{
	//int		a = 555;
	//char	*s = "five";	// *s의 주소 : 0x10fd35f56
	//char	c = '!';
	//int		i = 0;
	//int		p = 97;
	//void	*ptr = &p;

	//printf("a : %p\n", &a);
	//printf("s : %p\n", &s);	// 주소값 s가 담긴 곳의 주소 : 07ffee0faa7c0
	//printf("c : %p\n", &c);
	//printf("ptr : %p\n", ptr);
	//int	result = printf("hello%c it's %d%s 'o clock%c\n", c, a, s, c);
	
	//while (*s != '\0')
	//{
	//	printf("str : %p : %c\n", s, *(s));
	//	s++;
	//}
	
	//printf("return value : %s\n", result);
	//printf("%%%%%%\n");
	//int b = 'b';
	//void *a = (void *)18446744073709551615;
	//printf("number : %p\n", a);
	//printf("arg : %d\n", b);
//}

//int	main(void)
//{
//	int		a = 1;
//	char	b = 'a';
//	long	c = 2;
//	short	d = 'b';
//	float	e = 3;
//	double	f = 4;
//	int		g = 5;

//	int result = a+b+c+d+e+f+g;
	
//	printf("result : %d\n", result);
//	int	aa = sizeof(a);
//	int	bb = sizeof(b);
//	int	cc = sizeof(c);
//	int	dd = sizeof(d);
//	int	ee = sizeof(e);
//	int	ff = sizeof(f);
//	int	gg = sizeof(g);

//	printf("a : %p size : %d\n", &a, aa);
//	printf("b : %p size : %d\n", &b, bb);
//	printf("c : %p size : %d\n", &c, cc);
//	printf("d : %p size : %d\n", &d, dd);
//	printf("e : %p size : %d\n", &e, ee);
//	printf("f : %p size : %d\n", &f, ff);
//	printf("g : %p size : %d\n", &g, gg);
//}


//int main()
//{
	//int b = 4;
	//float a = 3;
	//long c = 5;

	//printf("a : %p , %lu\n");
	//printf(a);
	//printf("b : %p , %lu\n", &b, sizeof(b));
	//printf("c : %p , %lu\n", &c, sizeof(c));
//}


