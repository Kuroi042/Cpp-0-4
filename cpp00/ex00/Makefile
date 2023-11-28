NAME = mega




CC = g++  
CFLAGS = -Wall -Werror -Wextra  # -fsanitize=thread -g 

SRC_PS = megaphone.cpp
OBJS_C = ${SRC_PS:.cpp=.o}

all: $(NAME)
$(NAME):  $(OBJS_C) 
	 @$(CC)  $(CFLAGS) $(OBJS_C)   -o $(NAME)

 $(LIBFT): $(LIBFT_SRC)

clean :
	rm -rf  $(OBJS_C)

fclean : clean
	rm -rf $(NAME)

re : fclean all