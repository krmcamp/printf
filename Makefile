CC = gcc
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror -c

SRCS=./SRC/ft*.c

OBJECTS=ft*.o
INCLUDES=ft_printf.h

all:$(NAME)

$(NAME):
	
	$(CC) $(CFLAGS) $(SRCS) -I$(INCLUDES)
	ar rc $(NAME) $(OBJECTS)
	
clean:
	rm -f $(OBJECTS)


fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re







# NAME = libftprintf.a
# CC = clang
# CFLAGS += -Wall -Werror -Wextra
# OBJDIR = obj
# SRCDIR = src
# CONVDIR = conversions
# FLAGDIR = flags
# LIBDIR	= libft
# INCDIR	= $(LIBDIR)
# HEAD	= $(SRCDIR)/ft_printf.h

# SRCS =	ft_printf.c			\
# 		ft_case_c.c			\
# 		ft_case_di.c		\
# 		ft_case_p.c			\
# 		ft_case_s.c			\
# 		ft_case_u.c			\
# 		ft_print_param.c	\
# 		ft_putchar.c		\
# 		ft_putnbr.c			\
# 		ft_numlen.c			\
# 		ft_put_base.c		\
# 		ft_putnbr_base.c

		
# CFLAGS += -I$(INCDIR)
# OBJ = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))
# LIB		= $(LIBDIR)/libft.a

# _GREEN=\e[32m
# _YELLOW=\e[33m
# _CYAN=\e[36m
# _END=\e[0m

# all: $(NAME)

# $(NAME): $(OBJ)
# 	@printf "Compilation OK! "
# 	@ar rcs $@ $^
# 	@printf "[$(_GREEN)✓$(_END)]\n"

# $(OBJDIR)/%.o: $(SRCDIR)/%.c $(HEAD)
# 	@printf "Sources : "
# 	@$(CC) $(CFLAGS) -c $< -o $@
# 	@printf "$(_CYAN)$<\n$(_END)"
# $(OBJDIR)/$(LIBDIR)/%.o: $(LIBDIR)/%.c $(HEAD)
# 	@printf "Libft : "
# 	@$(CC) $(CFLAGS) -c $< -o $@
# 	@printf "$(_YELLOW)$<\n$(_END)"

# $(OBJDIR) :
# 	@mkdir $@ $@/$(CONVDIR) $@/$(FLAGDIR) $@/$(LIBDIR)

# $(OBJ) : | $(OBJDIR)

# clean:
# 	@printf "clean... "
# 	@rm -rf $(OBJDIR)
# 	@printf "[$(_YELLOW)✓$(_END)]\n"

# fclean: clean
# 	@printf "fclean... "
# 	@rm -rf $(NAME)
# 	@printf "[$(_BLUE)✓$(_END)]\n"

# re: fclean all clean

# .PHONY: clean fclean all re
