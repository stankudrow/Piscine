NAME := libft

LIB := $(NAME).a

SRC_DIR := srcs
SOURCES := $(addprefix $(SRC_DIR)/ft_, $(addsuffix .c, putchar putstr strcmp strlen swap))
OBJECTS := $(SOURCES:%.c=%.o)

INC_DIR := includes
INCLUDES := -I $(INC_DIR)

CC := gcc
CFLAGS := -Wall -Werror -Wextra

.PHONY: all clean fclean re

all: $(LIB)

# https://dev.to/iamkhalil42/all-you-need-to-know-about-c-static-libraries-1o0b
$(LIB): $(OBJECTS)
	ar crs $(LIB) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(LIB)

re: fclean all

# References:
# * GNUMake:
#   * https://www.gnu.org/software/make/manual/html_node/File-Name-Functions.html
#   * https://www.gnu.org/software/make/manual/html_node/Substitution-Refs.html
# * C static libraries
#   * https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html
#   * 