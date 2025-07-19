NAME        := bureaucracy
CXX         := c++
CXXFLAGS    := -Wall -Wextra -Werror -std=c++98
INCLUDES    := -Iincludes
SRC_DIR     := sources
OBJ_DIR     := obj

SRCS        := $(SRC_DIR)/main.cpp \
               $(SRC_DIR)/Bureaucrat.cpp \
               $(SRC_DIR)/AForm.cpp \
               $(SRC_DIR)/ShrubberyCreationForm.cpp \
               $(SRC_DIR)/RobotomyRequestForm.cpp \
               $(SRC_DIR)/PresidentialPardonForm.cpp

OBJS        := $(OBJ_DIR)/main.o \
               $(OBJ_DIR)/Bureaucrat.o \
               $(OBJ_DIR)/AForm.o \
               $(OBJ_DIR)/ShrubberyCreationForm.o \
               $(OBJ_DIR)/RobotomyRequestForm.o \
               $(OBJ_DIR)/PresidentialPardonForm.o

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
