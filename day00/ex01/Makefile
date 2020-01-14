# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nerahmou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 09:17:07 by nerahmou          #+#    #+#              #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

NAME := phonebook
CC := clang++
CFLAGS := -Wall -Wextra -Werror
RM := rm -rf

#******************************************************************************#
#                                    LIBFT                                     #
#******************************************************************************#

SRC = main.cpp PhoneBook.class.cpp Contact.class.cpp
OBJ = $(SRC:.cpp=.o)
INC = PhoneBook.class.hpp Contact.class.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	
fclean: clean
	@$(RM) $(NAME)

re: fclean all
