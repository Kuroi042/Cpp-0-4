NAME = noviolence

CC = c++  
CFLAGS = -Wall -Wextra -Werror  -g -std=c++98   # -fsanitize=thread -g 

SRC_PS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp  
OBJS_C = ${SRC_PS:.cpp=.o} 

all: $(NAME)
$(NAME):  $(OBJS_C)
	@$(CC)  $(CFLAGS) $(OBJS_C) -o $(NAME)


clean :
	rm -rf  $(OBJS_C)

fclean : clean
	rm -rf $(NAME)

re : fclean all