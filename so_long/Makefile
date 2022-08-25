SRCS	= so_long.c

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -rf

NAME	= press_start

LIBFT	= libft/libft.a

%.o: %.c
	$(CC) $(CFLAGS) -Imlx -c $< -o $@

$(NAME): $(SRCS) $(LIBFT)
	$(CC) $(SRCS) -Llibft -lft -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

$(LIBFT):
	make -C libft

all:	$(NAME)

clean:	
		$(RM) $(NAME)

fclean:	clean

re:		fclean all

.PHONY:	all clean fclean re
