# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/27 16:59:50 by mhnatovs          #+#    #+#              #
#    Updated: 2026/05/28 15:56:18 by mhnatovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= animal

SRC		= main.cpp \
		  Animal.cpp \
		  Dog.cpp \
		  Cat.cpp \
		  WrongAnimal.cpp \
		  WrongCat.cpp \
		  Brain.cpp

OBJDIR	= obj
OBJ		= $(OBJDIR)/main.o \
		  $(OBJDIR)/Animal.o \
		  $(OBJDIR)/Dog.o \
		  $(OBJDIR)/Cat.o \
		  $(OBJDIR)/WrongAnimal.o \
		  $(OBJDIR)/WrongCat.o \
		  $(OBJDIR)/Brain.o


CXX		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

v: $(NAME)
	valgrind --leak-check=full ./$(NAME)

.PHONY: all clean fclean re