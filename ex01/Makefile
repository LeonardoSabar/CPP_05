NAME        := bureaucracy
CXX         := c++
CXXFLAGS    := -Wall -Wextra -Werror -std=c++98
INCLUDES    := -Iincludes

SRC_DIR     := sources
OBJ_DIR     := obj

SRCS        := $(SRC_DIR)/main.cpp \
               $(SRC_DIR)/Bureaucrat.cpp \
               $(SRC_DIR)/Form.cpp

OBJS        := $(OBJ_DIR)/main.o \
               $(OBJ_DIR)/Bureaucrat.o \
               $(OBJ_DIR)/Form.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

