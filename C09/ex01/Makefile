INC_FILES = includes/ft.h
SRC_FILES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen..c srcs/ft_strcmp.c
OBJ_FILES = ${SRC_FILES:.c = .o}
CC = cc
CFLAG = -Wall -Wextra -Werror
RM = rm -f
NAME = libft.a
CLIB = ar rcs
RLIB = ranlib

all : ${NAME}

${NAME} : ${OBJ_FILES}
	${CLIB} ${NAME} ${OBJ_FILES}
	${RLIB} ${NAME}

clean :
	${RM} ${OBJ_FILES}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : clean fclean all re
