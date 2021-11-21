# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uangelik <uangelik@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/26 12:27:06 by uangelik          #+#    #+#              #
#    Updated: 2021/11/21 16:39:59 by uangelik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a

SRCS = 	ft_case_c.c			\
		ft_case_di.c		\
		ft_case_p.c			\
		ft_case_s.c			\
		ft_case_u.c			\
		ft_numlen.c			\
		ft_print_param.c	\
		ft_printf.c			\
		ft_put_base.c		\
		ft_putchar.c		\
		ft_putnbr_base.c	\
		ft_putnbr.c		

OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

CC = gcc
CC_FLAGS = -Wall -Wextra -Werror

$(OBJS_DIR)%.o : %.c ft_printf.h
	@mkdir -p $(OBJS_DIR)
	@gcc $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_PREFIXED)

all: $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
