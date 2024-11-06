NAME    = libftprintf.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror -I.

SRC     = ft_printf.c ft_print_char.c ft_print_str.c \
          ft_print_digit.c ft_print_address.c

OBJ     = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean 
	rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re
