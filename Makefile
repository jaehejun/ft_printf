# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 20:43:43 by jaehejun          #+#    #+#              #
#    Updated: 2023/04/13 13:27:53 by jaehejun         ###   ########.fr        #
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