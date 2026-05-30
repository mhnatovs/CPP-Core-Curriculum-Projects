# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/27 16:59:50 by mhnatovs          #+#    #+#              #
#    Updated: 2026/05/30 15:37:14 by mhnatovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= interface

SRC		= main.cpp \
		  AMateria.cpp \
		  ICharacter.cpp \
		  IMateriaSource.cpp \
		  Cure.cpp \
		  Ice.cpp

OBJDIR	= obj
OBJ		= $(OBJDIR)/main.o \
		  $(OBJDIR)/AMateria.o \
		  $(OBJDIR)/ICharacter.o \
		  $(OBJDIR)/IMateriaSource.o \
		  $(OBJDIR)/Cure.o
		  $(OBJDIR)/Ice.o

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