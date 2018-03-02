NAME =	my

SRC =	my_compute_power_rec.c \
	my_compute_square_root.c \
	my_find_prime_supp.c \
	my_getnbr.c \
	my_putchar.c \
	my_put_nbr.c \
	my_putstr.c \
	my_revstr.c \
	my_strcapitalize.c \
	my_strcat.c \
	my_strcmp.c \
	my_strcpy.c \
	my_str_is.c \
	my_strlen.c \
	my_strlowcase.c \
	my_strncat.c \
	my_strncpy.c \
	my_strupcase.c \
	my_swap.c \
	my_printf.c \
	get_next_line.c

OBJ =	$(SRC:.c=.o)

INC =	-I ../../include

CFLAGS=	$(INC) -W -Wall

CC =	gcc

mklib:	all

all:	$(OBJ)
	ar rc lib$(NAME).a *.o
	ln -s $(NAME)/lib$(NAME).a ..

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f ../lib$(NAME).a
	rm -f lib$(NAME).a

re:	fclean all
