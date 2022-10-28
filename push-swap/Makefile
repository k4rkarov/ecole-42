SRCS		= aux_functions.c \
			aux_functions2.c \
			main.c \
			operations1.c \
			operations2.c \
			operations3.c \
			sort_algorythm.c \
			validation.c

HEADER		= push_swap.h

NAME		= push_swap

CC			= cc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

$(NAME):	${SRCS} ${HEADER}
			${CC} ${CFLAGS} ${SRCS} -o ${NAME}

all:		$(NAME)

clean:
			${RM} $(NAME)

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re
