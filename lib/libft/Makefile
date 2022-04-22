SRCS		:= $(shell find . ! -name "*lst*.c" -name "*.c")
SRCS_BONUS	:= $(shell find . -name "*lst*.c")
OBJS		:= $(SRCS:.c=.o)
OBJS_BONUS	:= $(SRCS_BONUS:.c=.o)
CFLAGS		:= -Wall -Wextra -Werror -I.
CC			:= gcc
NAME		:= libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all 

bonus: $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

.PHONY: all clean fclean re
