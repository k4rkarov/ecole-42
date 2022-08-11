NAME	= minitalk

SERVER	= server

CLIENT	= client

CC		= cc

LIBFT	= libft/libft.a

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

$(NAME):	server client

${SERVER}:	${LIBFT} server.c
			${CC} ${CFLAGS} server.c -o server libft/libft.a

${CLIENT}:	${LIBFT} client.c
			${CC} ${CFLAGS} client.c -o client libft/libft.a

${LIBFT}:
			make -C libft

all:		$(NAME)

clean:
			${RM} ${SERVER} ${CLIENT} 
			cd $(LIBFT) && make clean

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re bonus
