# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/27 16:59:50 by mhnatovs          #+#    #+#              #
#    Updated: 2026/06/08 13:47:17 by mhnatovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bureaucrat

SRC		= main.cpp \
		  Bureaucrat.cpp \
		  AForm.cpp \
		  ShrubberyCreationForm.cpp \
		  PresidentialPardonForm.cpp \
		  RobotomyRequestForm.cpp
		  

OBJDIR	= obj
OBJ		= $(OBJDIR)/main.o \
		  $(OBJDIR)/Bureaucrat.o \
		  $(OBJDIR)/AForm.o \
		  $(OBJDIR)/ShrubberyCreationForm.o \
		  $(OBJDIR)/PresidentialPardonForm.o \
		  $(OBJDIR)/RobotomyRequestForm.o

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