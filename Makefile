# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agras <agras@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 10:20:34 by agras             #+#    #+#              #
#    Updated: 2022/04/12 21:33:47 by agras            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES_CLIENT				=	-I includes/server/ -I libft/includes/

INCLUDES_SERVER				=	-I includes/client/ -I libft/includes/

SERVER_SRCS				=	src/server/server.c\
							src/server/bit_management.c

CLIENT_SRCS				=	src/client/client.c

SERVER_OBJS				=	$(SERVER_SRCS:.c=.o)

CLIENT_OBJS				=	$(CLIENT_SRCS:.c=.o)

CC					=	gcc
RM					=	rm -f
CFLAGS				=	-Wall -Wextra -Werror
#CFLAGS				=	


all:                lib server client

server:					$(SERVER_OBJS)
					$(CC) $(CFLAGS) $(SERVER_OBJS) ${INCLUDES_SERVER} -L./libft -lft -o server

client:					$(CLIENT_OBJS)
					$(CC) $(CFLAGS) $(CLIENT_OBJS) ${INCLUDES_CLIENT} -L./libft -lft -o client

lib:
					@ make --no-print-directory -sC ./libft

clean:
					$(RM) $(SERVER_OBJS)
					$(RM) $(CLIENT_OBJS)
					make clean -C libft

fclean:
					$(RM) $(SERVER_OBJS)
					$(RM) server
					$(RM) $(CLIENT_OBJS)
					$(RM) client
					make fclean -C libft

re:					fclean all

.PHONY:				all clean fclean re