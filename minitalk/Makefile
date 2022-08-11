SRCS	= ft_client.c \
		  ft_server.c

OBJS	= ${SRCS:.c=.o}

NAME	= minitalk.a

LIBC	= ar -qs

CC		= cc

LIBFT	= libft/

PRINTF	= printf/

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:	
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			cd $(LIBFT) && make && cp libft.a ../$(NAME)
			cd $(PRINTF) && make && cp libftprintf.a ../$(NAME)
			${LIBC} $(NAME) ${OBJS}

all:		$(NAME)

clean:
			${RM} ${OBJS} 
			cd $(LIBFT) && make clean
			cd $(PRINTF) && make clean

fclean:		clean
			${RM} ${NAME}
			cd $(LIBFT) && make fclean
			cd $(PRINTF) && make fclean

re:			fclean all

.PHONY:		all clean fclean re bonus

