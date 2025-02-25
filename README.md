# so_long
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
LIBFT   = libft/libft.a
FT_PRINTF = ft_printf/libftprintf.a
LIBS    = -Llibft -lft -Lft_printf -lftprintf
INCS    = -Ilibft -Ift_printf

SERVER  = server
CLIENT  = client

all: $(LIBFT) $(FT_PRINTF) $(SERVER) $(CLIENT)

$(SERVER): $(SERVER).c
	$(CC) $(CFLAGS) $(SERVER).c -o $(SERVER) $(LIBS) $(INCS)

$(CLIENT): $(CLIENT).c
	$(CC) $(CFLAGS) $(CLIENT).c -o $(CLIENT) $(LIBS) $(INCS)

$(LIBFT):
	@make -C libft

$(FT_PRINTF):
	@make -C ft_printf

clean:
	@make -C libft clean
	@make -C ft_printf clean

fclean: clean
	$(RM) $(SERVER) $(CLIENT) $(LIBFT) $(FT_PRINTF)

re: fclean all
