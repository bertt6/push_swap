NAME    = push_swap
CC = gcc
INC = push_swap.h
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS    = ft_split.c push_swap.c rules.c utils.c

OBJS = $(SRCS:.c=.o)

Y = "\033[33m"
R = "\033[31m"
G = "\033[32m"
B = "\033[34m"
X = "\033[0m"
UP = "\033[A"
CUT = "\033[K"

all: $(NAME)

$(NAME): $(OBJS) 
	@$(CC) ${CFLAGS} $(OBJS) -o $(NAME) 
	@echo $(B)push_swap is ready

%.o: %.c $(INC)
	@echo $(R)Complining [$<]
	@$(CC) -c $< -o $@ $(CFLAGS)

clean:
	@$(RM) $(OBJS)
	@echo $(R)Removed [$(OBJS)]

fclean: clean
	@$(RM) $(NAME)
	@echo $(R)Removed [$(NAME)]

re: fclean all

.PHONY: all, clean, fclean, re