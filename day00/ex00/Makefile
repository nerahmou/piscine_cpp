# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2020/01/14 13:23:09 by nerahmou     #+#   ##    ##    #+#        #
#    Updated: 2020/01/14 13:23:10 by nerahmou    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

NAME := megaphone
CC := clang++
CFLAGS := -Wall -Wextra -Werror
RM := rm -rf

#******************************************************************************#
#                                    LIBFT                                     #
#******************************************************************************#

SRC = megaphone.cpp
OBJ = megaphone.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $< -o $@

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	
fclean: clean
	@$(RM) $(NAME)

re: fclean all
