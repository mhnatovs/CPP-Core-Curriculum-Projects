# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/25 11:48:41 by mhnatovs          #+#    #+#              #
#    Updated: 2026/05/27 13:42:49 by mhnatovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diamond

SRC = main.cpp \
	  ClapTrap.cpp \
	  ScavTrap.cpp \
	  FragTrap.cpp \
	  DiamondTrap.cpp

OBJDIR = obj
OBJ = $(OBJDIR)/main.o \
	  $(OBJDIR)/ClapTrap.o \
	  $(OBJDIR)/ScavTrap.o \
	  $(OBJDIR)/FragTrap.o \
	  $(OBJDIR)/DiamondTrap.o

CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
 
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

.PHONY: all clean fclean re