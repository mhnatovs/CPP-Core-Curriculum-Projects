# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/27 16:59:50 by mhnatovs          #+#    #+#              #
#    Updated: 2026/05/28 13:53:28 by mhnatovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= animal

SRC		= main.cpp \
		  Animal.cpp \
		  Dog.cpp \
		  Cat.cpp \
		  WrongAnimal.cpp \
		  WrongCat.cpp

OBJ		= main.o \
		  Animal.o \
		  Dog.o \
		  Cat.o \
		  WrongAnimal.o \
		  WrongCat.o


CXX		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re