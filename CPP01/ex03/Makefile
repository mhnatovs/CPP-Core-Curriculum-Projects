# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/17 20:03:55 by mhnatovs          #+#    #+#              #
#    Updated: 2026/05/19 15:25:31 by mhnatovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRC  = main.cpp \
	   HumanA.cpp \
	   HumanB.cpp \
	   Weapon.cpp

OBJ_DIR = obj
OBJ  = $(OBJ_DIR)/main.o \
	   $(OBJ_DIR)/HumanA.o \
	   $(OBJ_DIR)/HumanB.o \
	   $(OBJ_DIR)/Weapon.o

CXX  = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re