# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/19 14:24:09 by mhnatovs          #+#    #+#              #
#    Updated: 2026/03/22 14:17:59 by mhnatovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC =   main.cpp \
		Contact.cpp \
		PhoneBook.cpp

OBJ_DIR = obj
OBJ =   $(OBJ_DIR)/main.o \
		$(OBJ_DIR)/Contact.o \
		$(OBJ_DIR)/PhoneBook.o

CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re