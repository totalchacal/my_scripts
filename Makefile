##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

SRC	=		\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

NAME    =	nani

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/
	gcc -o $(NAME) $(SRC) -L lib/my -lmy

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
