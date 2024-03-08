NAME =	libftprintf.a
CC = cc
AR = ar rcs

SRC = src/ft_putchar.c

INC = include/reqs.h

CFLAGS =	-Wall -Werror -Wextra

$(NAME): $(INC) $(SRC)
	$(AR) $(NAME)

fclean:
	DEL libftprintf.a
#rm -rf libftprintf.a 
.PHONY: clean fclean re