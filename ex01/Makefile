TARGET = cast

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJS_DIR = ./objs
SRCS_DIR = ./
INCL_DIR = ./
FILES = main.cpp
INCLUDES := $(addprefix $(INCL_DIR)/, $(shell find $(INCL_DIR) -maxdepth 3 -name '*.hpp' -o -name '*.h'))

OBJS = $(addprefix $(OBJS_DIR)/, $(FILES:.cpp=.o))

all: create_dirs $(TARGET)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp $(INCLUDES)
		$(CC) -I$(INCL_DIR) $(FLAGS) -c $< -o $@

$(TARGET):  $(OBJS) $(INCLUDES)
		$(CC) $(FLAGS) $(OBJS) -o $(TARGET)


create_dirs:
		@ mkdir -p $(OBJS_DIR)

clean:
		rm -rf $(OBJS_DIR)

fclean: clean
		rm -rf $(TARGET)

re: fclean all

run:
		@ ./$(TARGET)

leaks:
	@ leaks --atExit -- ./$(TARGET)

.PHONY: all leaks re fclean clean run create_dirs
