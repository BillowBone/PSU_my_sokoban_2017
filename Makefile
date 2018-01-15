##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

NAME	=	my_sokoban

SRC	=	./src/copy_buffer.c	\
		./src/counters.c	\
		./src/end.c		\
		./src/errors.c	\
		./src/game_loop.c	\
		./src/help.c		\
		./src/moves.c		\
		./src/moves2.c	\
		./src/my_putchar.c	\
		./src/my_put_nbr.c	\
		./src/my_putstr.c	\
		./src/my_sokoban.c	\
		./src/my_strlen.c	\
		./src/dimension.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -pedantic -I./include/ -lncurses

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
