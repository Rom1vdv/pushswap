# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/17 18:23:44 by romvan-d          #+#    #+#              #
#    Updated: 2022/02/22 16:43:44 by romvan-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_atoi.c\
		ft_strlcat.c\
		ft_strnstr.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_itoa.c\
		ft_strtrim.c\
		ft_split.c\
		ft_strmapi.c\
		ft_striteri.c
		
SRCS_BONUS =    ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstclear.c\
				ft_lstiter.c\
				ft_lstmap.c

OBJS =          ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

RM = rm -f

CC = gcc

CFLAGS = -Wall -Wextra -Werror

.c.o:   ${SRCS}
		${CC} ${CFLAGS} -c -o $@ $<

${NAME}:        ${OBJS}
		ar r $(NAME) ${OBJS}

all:    ${NAME}

bonus:  ${OBJS_BONUS}
		ar r ${NAME} ${OBJS_BONUS}

clean:
		${RM} ${OBJS} ${OBJS_BONUS}

fclean:         clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus