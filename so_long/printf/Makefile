SRCS	= ft_printf.c \
		  ft_putchar.c \
		  ft_putstr.c \
		  ft_hex_converter.c \
		  ft_putnbr.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a
LIBC	= ar -qs
CC		= cc
LIBPATH	= libft/
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:	
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			cd $(LIBPATH) && make && cp libft.a ../$(NAME)
			${LIBC} $(NAME) ${OBJS}

all:		$(NAME)

clean:
			${RM} ${OBJS} 
			cd $(LIBPATH) && make clean

fclean:		clean
			${RM} ${NAME}
			cd $(LIBPATH) && make fclean

re:			fclean all

.PHONY:		all clean fclean re bonus
