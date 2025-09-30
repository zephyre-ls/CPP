CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = PhoneBook
FILES = main.cpp \
				PhoneBook.cpp \
				Contact.cpp \

OBJS = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Deleting object files : .o"
	@rm -f $(OBJS)

fclean: clean
	@echo "Deleting object files and executable"
	@rm -f $(NAME)

re: fclean all
