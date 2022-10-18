# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 12:34:11 by alejandg          #+#    #+#              #
#    Updated: 2022/10/11 12:53:41 by alejandg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlcpy.c ft_strlen.c \
ft_strchr.c ft_strlcat.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_striteri.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_split.c

BSRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = ${SRCS:.c=.o}

BOBJS = ${BSRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
			${CC} -c ${CFLAGS} ${SRCS}
			ar crs ${NAME} ${OBJS}

bonus: ${BOBJS} ${BSRCS} ${SRCS} ${OBJS}
		ar crs ${NAME} ${BOBJS} ${OBJS} ${SRCS}


clean:
				${RM} ${OBJS} ${BOBJS}



fclean:	clean
				${RM} ${NAME}

re:			fclean all

.PHONY: all, clean, fclean, re