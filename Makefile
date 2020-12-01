NAME = libasm.a
SRC = srcs/ft_strlen.s srcs/ft_strcpy.s srcs/ft_strcmp.s srcs/ft_write.s srcs/ft_read.s srcs/ft_strdup.s
OBJ = $(SRC:.s=.o)
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.s
	nasm $< -f macho64 -o $@

test: $(NAME) main.c
	gcc -no-pie $(CFLAGS) main.c $(NAME) -o test

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f test

re: fclean all

.PHONY: all re clean fclean
