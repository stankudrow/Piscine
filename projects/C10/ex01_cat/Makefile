# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stanislav <student.21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 08:22:49 by stanislav         #+#    #+#              #
#    Updated: 2022/04/28 08:22:50 by stanislav        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ft_cat

CC := gcc
CFLAGS := -Wall -Werror -Wextra

HEADERS_DIR := headers
SOURCES_DIR := sources
OBJECTS_DIR := objects

HEADERS := $(addprefix $(HEADERS_DIR)/, ft_cat.h)
SOURCES := ft_cat_error.c ft_cat.c ft_strcmp.c ft_strlen.c
OBJECTS := $(SOURCES:.c=.o)
SOURCES := $(addprefix $(SOURCES_DIR)/, $(SOURCES))
OBJECTS := $(addprefix $(OBJECTS_DIR)/, $(OBJECTS))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

$(OBJECTS_DIR)/%.o: $(SOURCES_DIR)/%.c $(HEADERS)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I $(HEADERS_DIR) -c $< -o $@

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
