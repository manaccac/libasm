SRCS		=	ft_strlen.s ft_strcmp.s ft_strcpy.s # ft_write.s ft_read.s ft_strdup.s

OBJS		=	$(SRCS:.s=.o)

NA			=	nasm

NA_FLAGS	=	-f macho64

FLAGS 		=	-Wall -Werror -Wextra

NAME		=	libasm.a

TEST		=	test

%.o:			%.s
				$(NA) $(NA_FLAGS) $<

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				rm -rf $(OBJS)

fclean:			clean
				rm -rf $(NAME) $(TEST)

re:				fclean $(NAME)

test:			$(NAME)
				gcc $(FLAGS) -L. -lasm -o $(TEST) main.c
				./$(TEST) < Makefile

bonus:			$(OBJS)
				ar rcs $(NAME) $(OBJS)

test_bonus:		bonus
				gcc $(FLAGS) -L. -lasm -o main_bonus.c

.PHONY:			clean fclean re test bonus test_bonus