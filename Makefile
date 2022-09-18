# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: segan <segan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 14:09:42 by segan             #+#    #+#              #
#    Updated: 2022/09/16 16:53:13 by segan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

AR = ar

ARFLAGS = -rcs

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf_di.c ft_printf_hex.c ft_printf_p.c ft_printf_s.c ft_printf_u.c\
		ft_printf.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_strlen.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $(SRCS)

$(NAME) : $(OBJS)
		$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean :
	make clean
	rm -f $(NAME)

re :
	make fclean
	make all

.PHONY : all clean fclean re
