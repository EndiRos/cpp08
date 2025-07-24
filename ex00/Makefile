CXX= c++
cXXFGLAGS = -Wextra -Werror -Wall -std=c++98 -g
INCLUDE = -I include 
NAME = ex00
SRC = src/main.cpp
OBJ = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) $(INCLUDE) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -fr $(OBJ)
fclean:clean
	rm -fr $(NAME)
re: fclean all
