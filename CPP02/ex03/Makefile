NAME = Point
OBJ_DIR = .objet
SRCS = main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJS = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRCS))
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf
PP = c++

BLUE = \033[0;34m
RED = \033[0;31m
YELLOW = \033[0;33m
RESET = \033[0m

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo "$(YELLOW)creat obje_directory$(RESET)"

$(NAME) : $(OBJS)
	@$(PP) $(CPPFLAGS) $(SRCS) -o $(NAME)
	@echo "$(BLUE)make cpp02/ex03$(RESET)"

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@$(PP) $(CPPFLAGS) -c $< -o $@

fclean : clean
	@$(RM) $(NAME)
	@echo "$(RED)clean cpp02/ex02$(RESET)"

clean:
	@$(RM) $(OBJ_DIR)

re : fclean $(NAME)

.PHONY: all clean fclean re
