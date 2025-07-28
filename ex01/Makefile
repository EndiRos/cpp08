CXX= c++
FLAGSXX = -Wextra  -Werror -Wall -std=c++98 -g
INCLUDE = -I include
NAME = span
SRC = src/main.cpp src/Span.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGSXX) $(INCLUDE) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CXX) $(FLAGSXX) $(INCLUDE) -c $< -o $@

clean:
	rm -fr $(OBJ)
fclean: clean
	rm -fr $(NAME)
re: fclean all
