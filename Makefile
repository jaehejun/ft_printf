# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 20:43:43 by jaehejun          #+#    #+#              #
#    Updated: 2023/04/11 21:28:22 by jaehejun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

SRCS	=

OBJS	=

all: $(NAME)

$(NAME): $(OBJS)
	ar -r $(NAME) $(OBJS)

.o: .c	$(CC) $(CFLAGS) -o $@ -c $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:
	make fclean
	make all