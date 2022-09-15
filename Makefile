# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: segan <segan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 14:09:42 by segan             #+#    #+#              #
#    Updated: 2022/09/15 14:01:38 by segan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

AR = ar

ARFLAGS = -rcs

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf_di.c ft_printf_hex.c ft_printf_p.c ft_printf_s.c ft_printf_u.c\
		ft_printf.c

OBJS = $(SRCS:.c=.o)

LIBFTPATH = ../libft

LIBFTNAME = ft

all : $(NAME)

%.o : %.c
	make -C $(LIBFTPATH)
	$(CC) $(CFLAGS) -c $(SRCS) -L$(LIBFTPATH) -l$(LIBFTNAME)

$(NAME) : $(OBJS)
		$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean :
	make clean -C $(LIBFTPATH)
	rm -f $(OBJS)

fclean :
	make fclean -C $(LIBFTPATH)
	make clean
	rm -f $(NAME)

re :
	make fclean
	make all

.PHONY : all clean fclean re
