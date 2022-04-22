SRCS 	:= $(wildcard *.c)
OBJS 	:= $(SRCS:.c=.o)
CC 		:= gcc
CFLAGS 	:= -Wall -Wextra -Werror
AR		:= ar
NAME 	:= libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
