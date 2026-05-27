# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/25 11:48:41 by mhnatovs          #+#    #+#              #
#    Updated: 2026/05/26 17:30:10 by mhnatovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap

SRC = main.cpp \
	  ClapTrap.cpp \
	  ScavTrap.cpp \
	  FragTrap.cpp

OBJDIR = obj
OBJ = $(OBJDIR)/main.o \
	  $(OBJDIR)/ClapTrap.o \
	  $(OBJDIR)/ScavTrap.o \
	  $(OBJDIR)/FragTrap.o

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