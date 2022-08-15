NAME	= minitalk

SERVER	= server

CLIENT	= client

CC		= cc

LIBFT	= libft/libft.a

RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror

$(NAME):	server client

${SERVER}:	${LIBFT} ft_server.c
			${CC} ${CFLAGS} ft_server.c -o server libft/libft.a

${CLIENT}:	${LIBFT} ft_client.c
			${CC} ${CFLAGS} ft_client.c -o client libft/libft.a

${LIBFT}:
			make -C libft

all:		$(NAME)

clean:
			${RM} ${SERVER} ${CLIENT} 
			cd libft && make clean

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re bonus
