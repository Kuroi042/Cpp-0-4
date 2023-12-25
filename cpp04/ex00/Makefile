NAME =  Hayawan
CC = c++  
CXXFLAGS = -Wall -Wextra -Werror  -g -std=c++98  

SRC_PS = main.cpp  Dog.cpp  Cat.cpp 
OBJS_C = ${SRC_PS:.cpp=.o} 

all: $(NAME)
$(NAME):  $(OBJS_C)
	@$(CC) $(CXXFLAGS) $(OBJS_C) -o $(NAME)


clean :
	rm -rf  $(OBJS_C)

fclean : clean
	rm -rf $(NAME)

re : fclean all
