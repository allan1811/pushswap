##
## EPITECH PROJECT, 2021
## B-CPE-110-NCE-1-1-BSQ-allan.charlier
## File description:
## Makefile
##

SRC	=	lib/my/my_putchar.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_putstr.c	\
		lib/my/my_strlen.c	\
		lib/my/my_getnbr.c	\
		src/main.c\
		src/pushswap.c\
		src/sasb.c\
		src/rarra.c\
		src/select.c\
		src/checkorder.c\
		src/papb.c\
		src/poppile.c\

NAME =	libmy.a

OBJ = 	$(SRC:.c=.o)

BINARY	=	push_swap

CFLAGS	=	-g3

all: 	$(NAME)

$(NAME) : 	$(OBJ)
		ar rc $(NAME) $(OBJ)
		gcc $(OBJ) -o $(BINARY) $(CFLAGS) -L. -lmy


clean:
	rm -f $(OBJ)

fclean: clean
		rm -rf $(NAME)
		rm -rf $(BINARY) vgcore.*

re: 	fclean all