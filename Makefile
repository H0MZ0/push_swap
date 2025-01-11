CC = cc
CFLAGS = -Wall -Wextra -Werror
# SRC = 

OBJ = $(SRC:.c=.o)

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJ)
		ar rcs $(NAME) $(OBJ)
$(OBJ) : $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

$(BOBJ) : $(BSRC)
	$(CC) $(CFLAGS) -c $(BSRC)

clean :
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all bonus clean fclean re