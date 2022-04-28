NAME := do-op

CC := gcc
CFLAGS := -Wall -Werror -Wextra -g

HDR := do_op.h
SRC := do_op.c ft_atoi.c ops.c utils.c
OBJS := $(SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
