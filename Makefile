SRC_SRV		:= $(wildcard src/server/*.c)
OBJ_SRV		:= $(SRC_SRV:.c=.o)
SRC_CL		:= $(wildcard src/client/*.c)
OBJ_CL		:= $(SRC_CL:.c=.o)
LIBFT		:= lib/libft/libft.a
FTPRNTF		:= lib/ft_printf/libftprintf.a
MAKE		:= make -C
INC_DIR		:= -L. -Linc/
LIB_DIR		:= -Llib/libft -Llib/ft_printf
LIBS		:= -l:libft.a -l:libftprintf.a
BIN_DIR		:= bin
CC			:= gcc
CFLAGS		:= -Wall -Werror -Wextra
TARGETS		:= client server

all: $(LIBFT) $(FTPRNTF) $(TARGETS)

$(LIBFT):
	$(MAKE) lib/libft all

$(FTPRNTF):
	$(MAKE) lib/ft_printf all

client: $(LIBFT) $(FTPRNTF) $(OBJ_CL)
	$(CC) $(CFLAGS) -o $(BIN_DIR)/client $(OBJ_CL) $(LIB_DIR) $(LIBS)

server:	$(LIBFT) $(FTPRNTF) $(OBJ_SRV)
	$(CC) $(CFLAGS) -o $(BIN_DIR)/server $(OBJ_SRV) $(LIB_DIR) $(LIBS)

clean:
	make -C lib/libft clean
	make -C lib/ft_printf clean
	rm -f $(OBJ_SRV) $(OBJ_CL)

fclean:
	make -C lib/libft fclean
	make -C lib/ft_printf fclean
	rm -f $(OBJ_SRV) $(OBJ_CL) 
	rm -f bin/server
	rm -f bin/client

re: fclean all

.PHONY: all re clean fclean server client
