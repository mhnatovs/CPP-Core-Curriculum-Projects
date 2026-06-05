# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/27 16:59:50 by mhnatovs          #+#    #+#              #
#    Updated: 2026/06/05 15:59:07 by mhnatovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bureaucrat

SRC		= main.cpp \
		  Bureaucrat.cpp \
		  Form.cpp

OBJDIR	= obj
OBJ		= $(OBJDIR)/main.o \
		  $(OBJDIR)/Bureaucrat.o \
		  $(OBJDIR)/Form.o

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

.PHONY: all clean fclean re