SRCS	= fractol.c \
		  render.c \
		  formula.c \
		  main.c

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -rf

NAME	= fractol.o

LIBFT	= libft/libft.a

%.o: %.c
	$(CC) $(CFLAGS) -Imlx -g -c $< -o $@

$(NAME): $(SRCS) $(LIBFT)
	$(CC) $(SRCS) -Llibft -lft -Lmlx -lmlx -framework OpenGL -Ofast -framework AppKit -o $(NAME)

$(LIBFT):
	make -C libft

all:	$(NAME)

clean:
		$(RM) $(NAME)

fclean:	clean

re:		fclean all

.PHONY:	all clean fclean re
