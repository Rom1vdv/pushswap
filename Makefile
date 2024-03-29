# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 17:14:12 by romvan-d          #+#    #+#              #
#    Updated: 2023/01/25 13:31:21 by romvan-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FILES = error_management main parsing push radix reverse_rotate rotate \
		small_stack_sort swap utils

SRCS = $(addprefix sources/, $(addsuffix .c, $(FILES)))

OBJS = ${SRCS:.c=.o}

LIBFT = libft.a

RM = rm -f

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I ./includes -I ./libft

#SANITIZE =  -fsanitize=address -g

$(NAME): libft/$(LIBFT) $(OBJS)
		$(CC) $(SANITIZE) $(CFLAGS) -o $@ libft/$(LIBFT) $(OBJS)

libft/$(LIBFT) :
		make -C libft

all:    $(NAME)

clean:
		$(RM) $(OBJS)
		make clean -C libft

fclean:         clean
		$(RM) $(NAME) $(MLX)
		make fclean -C libft
		
re: fclean all

.PHONY: all clean fclean re