# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stanislav <student.21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 08:22:56 by stanislav         #+#    #+#              #
#    Updated: 2022/04/28 08:22:58 by stanislav        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ft_display_file

CC := gcc
CFLAGS := -Wall -Werror -Wextra

HEADERS_DIR := headers
SOURCES_DIR := sources
OBJECTS_DIR := objects

HEADERS := $(addprefix $(HEADERS_DIR)/, ft_display_file.h)
SOURCES := ft_display_error.c ft_display_file.c ft_strlen.c
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
