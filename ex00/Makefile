NAME = ClapTrap
CC = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp \
	ClapTrap.cpp

OBJ = $(SRCS:%.cpp=%.o)

RM = rm -rdf

ERASE		=	\033[2K\r
BLUE		=	\033[34m
YELLOW		=	\033[33m
GREEN		=	\033[32m
END			=	\033[0m

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -O2 -c $< -o $< -o $@
	printf "$(BLUE)-> $<$(END)\n"

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	printf "$(GREEN)$(NAME) made$(END)\n"

clean:
	$(RM) $(OBJ)
	printf "$(YELLOW)$(OBJ) removed$(END)\n"

fclean: clean
	$(RM) $(OBJ) $(NAME)
	printf "$(YELLOW)$(NAME) removed$(END)\n"

re:	fclean all

.PHONY: all clean fclean re