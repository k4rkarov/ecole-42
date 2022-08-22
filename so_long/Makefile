OBJ		= so_long.c

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -rf

NAME	= press_start

%.o: %.c
	$(CC) $(CFLAGS) -Imlx -c $< -o $@

$(NAME): $(OBJ)
		$(CC) $(OBJ) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

all:	$(NAME)

clean:	
		$(RM) $(NAME)

fclean:	clean

re:		fclean all

.PHONY:	all clean fclean re
