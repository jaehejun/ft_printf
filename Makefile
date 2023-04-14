# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 20:43:43 by jaehejun          #+#    #+#              #
#    Updated: 2023/04/14 19:58:51 by jaehejun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_printf.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

%.o: %.c	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:
	make fclean
	make all




	//libft 아카이브 사용하려면 ./libft로 가서 libft.a를 만든후에
	//libft.a와 printf.c 들을 묶어서 libftprintf.a 로 만들어야 함