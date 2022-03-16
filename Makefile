##
## EPITECH PROJECT, 2020
## a
## File description:
## a
##

SRCS	=	./lib/my/rush3.c		\
			./lib/my/my_putstr.c	\
			./lib/my/my_putchar.c	\
			./lib/my/main.c			\
			./lib/my/my_put_nbr.c

NAME    = rush3

OBJS    = $(SRCS:.c=.o)

CFLAGS = -I./include
CFLAGS += -W -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
		gcc -o $(NAME) $(MAIN) $(OBJS) $(LDFLAGS)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
