# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/17 13:08:58 by mhnatovs          #+#    #+#              #
#    Updated: 2026/06/29 13:21:32 by mhnatovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= convertion

SRC		= main.cpp \
		  ScalarConverter.cpp

OBJDIR	= obj
OBJ		= $(OBJDIR)/main.o \
		  $(OBJDIR)/ScalarConverter.o

CXX		= c++
FLAGS	=  -std=c++98

# -Wall -Wextra -Werror

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