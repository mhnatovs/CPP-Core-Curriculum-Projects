# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/23 16:14:29 by mhnatovs          #+#    #+#              #
#    Updated: 2026/05/23 16:14:30 by mhnatovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

SRC =   main.cpp \
		Fixed.cpp

OBJ_DIR = obj
OBJ =   $(OBJ_DIR)/main.o \
		$(OBJ_DIR)/Fixed.o

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