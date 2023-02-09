NAME = push_swap

SRCS = $(wildcard *.c libft/*.c)

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g  -Iinc

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC)  $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
