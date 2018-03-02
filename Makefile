##
## EPITECH PROJECT, 2017
## Main Makefile
## File description:
## Makefile which compile the whole project
##

NAME =	matchstick

SRC =	src/main.c \
	src/object.c \
	src/display.c \
	src/player_loop.c \
	src/ia_loop.c \
	src/func.c

OBJ =	$(SRC:.c=.o)

INC =	-I include

LIB =	lib/libmy.a

LIBS =	-L lib -lmy

CFLAGS= $(INC) $(LIBS) -Wextra -Wall

CC =	gcc

all:	$(LIB) $(NAME)

$(LIB):
	make -C lib/my

$(NAME):$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	make -C lib/my fclean
	rm -f $(NAME)

re:	fclean all

dbg:	CFLAGS += -g -O0
dbg:	re
