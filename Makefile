NAME    =	libftprintf.a
CC      =	cc
CFLAGS  =	-Wall -Wextra -Werror -I. -I$(INC_DIR)
SRC_DIR =	src
OBJ_DIR =	obj
INC_DIR =	inc

FILES     = ft_printf.c ft_print_char.c ft_print_str.c \
          ft_print_digit.c ft_print_address.c

SRC = $(addprefix $(SRC_DIR)/, $(FILES))
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean 
	rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re
