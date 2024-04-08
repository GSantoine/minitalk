# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agras <agras@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 01:48:03 by agras             #+#    #+#              #
#    Updated: 2022/02/09 17:01:24 by agras            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
SRCS		= 	${IS}ft_isalpha.c\
				${IS}ft_isdigit.c\
				${IS}ft_isalnum.c\
				${IS}ft_isascii.c\
				${IS}ft_isprint.c\
				${MEM}ft_memset.c\
				${MEM}ft_bzero.c\
				${MEM}ft_memcpy.c\
				${MEM}ft_memcmp.c\
				${MEM}ft_memmove.c\
				${MEM}ft_memchr.c\
				${MEM}ft_calloc.c\
				${STR}ft_strlen.c\
				${STR}ft_substr.c\
				${STR}ft_strjoin.c\
				${STR}ft_strlcpy.c\
				${STR}ft_strlcat.c\
				${STR}ft_toupper.c\
				${STR}ft_tolower.c\
				${STR}ft_strchr.c\
				${STR}ft_strrchr.c\
				${STR}ft_strncmp.c\
				${STR}ft_strnstr.c\
				${STR}ft_strdup.c\
				${STR}ft_strtrim.c\
				${STR}ft_strmapi.c\
				${STR}ft_striteri.c\
				${STR}ft_cstr.c\
				${STR}ft_split.c\
				${STR}ft_strcmp.c\
				${STR}strcmp_occurence.c\
				${STR}ft_strcat_malloc.c\
				${PRINT}ft_putstr_fd.c\
				${PRINT}ft_putnbr_fd.c\
				${PRINT}ft_putendl_fd.c\
				${PRINT}ft_putchar_fd.c\
				${PRINT}ft_print_2d_tab_char.c\
				${CONV}ft_itoa.c\
				${CONV}ft_atoi.c\
				${LST}ft_lstsize.c\
				${LST}ft_lstnew.c\
				${LST}ft_lstmap.c\
				${LST}ft_lstlast.c\
				${LST}ft_lstiter.c\
				${LST}ft_lstdelone.c\
				${LST}ft_lstclear.c\
				${LST}ft_lstadd_front.c\
				${LST}ft_lstadd_back.c\
				${GNL}get_next_line_utils.c\
				${GNL}get_next_line.c\
				${FREE}free_2d_tab.c

GNL		=	src/gnl/
IS		=	src/is/
CONV	=	src/conv/
MEM		=	src/mem/
PRINT	=	src/print/
LST		=	src/lst/
STR		=	src/str/
FREE	=	src/free/

INCLUDES	=	-I includes
OBJS		= ${SRCS:.c=.o}
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

.c.o:
		${CC} ${CFLAGS} ${INCLUDES} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}

# bonus:		${OBJS} ${OBJSB}
# 		ar rcs ${NAME} ${OBJSB}

all: 		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

