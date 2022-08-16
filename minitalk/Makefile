NAME	= minitalk

SERVER	= server

CLIENT	= client

SERVERB = server_bonus

CLIENTB	= client_bonus

CC		= cc

LIBFT	= libft/libft.a

RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror

$(NAME):	server client

${SERVER}:	${LIBFT} ft_server.c
			${CC} ${CFLAGS} ft_server.c -o server libft/libft.a

${CLIENT}:	${LIBFT} ft_client.c
			${CC} ${CFLAGS} ft_client.c -o client libft/libft.a

${SERVERB}:	${LIBFT} ft_server_bonus.c
			${CC} ${CFLAGS} ft_server_bonus.c -o server_bonus libft/libft.a

${CLIENTB}:	${LIBFT} ft_client_bonus.c
			${CC} ${CFLAGS} ft_client_bonus.c -o client_bonus libft/libft.a

${LIBFT}:
			make -C libft

bonus:		${SERVERB} ${CLIENTB}

all:		$(NAME)

clean:
			${RM} ${SERVER} ${CLIENT} ${SERVERB} ${CLIENTB}
			cd libft && make clean

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re
