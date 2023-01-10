NAME =  Bureaucrat

SRC		=	Bureaucrat.cpp main.cpp AForm.cpp PresidentialPardonFor.cpp \
			RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

CC 		= c++

FLAGS	= -std=c++98 -Wall -Wextra -Werror 

OBJS 	= $(SRC:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME) $(OBJS)

%.o: %.c
		$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re