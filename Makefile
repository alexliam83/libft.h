# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 12:34:11 by alejandg          #+#    #+#              #
#    Updated: 2022/09/29 12:51:09 by alejandg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlcpy.c ft_strlen.c ft_strchr.c ft_strlcat.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strnstr.c ft_strncmp.c ft_atoi.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
			${CC} -c ${CFLAGS} ${SRCS}
			ar crs ${NAME} ${OBJS}

clean:
				${RM} ${OBJS}



fclean:			clean
							${RM} ${OBJS}

re:			fclean all

.PHONY: all, clean, fclean, re