CC = cc
CFLAGS  = -Wall -Wextra -Werror
NAME = client.a
SERVER = server.a
LIBFT = libft/ft_atoi.c libft/ft_printf.c
MAKE = make
LIBFTFOLDER = ./libft
cd = client.c
RM = rm
cd_server = server.c
LDLFLAGS = -L./libft -lft

obj = $(cd:.c=.o)
obj_server = $(cd_server:.c=.o)
libft_obj = ${LIBFT:.c=.o}

all: libft server client

program: $(NAME)

$(NAME): $(obj) $(libft_obj)
	ar rcs $(NAME) $(obj) $(libft_obj)

$(SERVER): $(obj_server) $(libft_obj)
	ar rcs $(SERVER) $(obj_server) $(libft_obj)

client: client.c $(NAME)
	$(CC) client.c $(NAME) -o client $(LDLFLAGS)

server: server.c $(SERVER)
	$(CC) server.c $(SERVER) -o server $(LDLFLAGS)

fclean: clean
	$(MAKE) -C libft fclean
	$(RM) -f $(NAME)

libft:
	@make all -C $(LIBFTFOLDER)

clean:
	$(MAKE) -C libft clean
	$(RM) -f $(obj) $(bobj)
	$(RM) -f client server server.a server.o

re: fclean all

.PHONY: all server client fclean libft clean re program