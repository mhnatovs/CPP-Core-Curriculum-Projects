NAME = sed_is_for_losers

SRC  = main.cpp \
	   SedIsForLosers.cpp

OBJ_DIR = obj
OBJ  = $(OBJ_DIR)/main.o \
	   $(OBJ_DIR)/SedIsForLosers.o

CXX  = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

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