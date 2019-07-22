# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbaloyi <mbaloyi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/18 17:20:48 by mbaloyi           #+#    #+#              #
#    Updated: 2019/07/16 11:02:17 by mbaloyi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = ../libft/libft.a	
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft

OBJS = $(SRCS:.c=.o)


all: 
	@make -C ../libft all
	@$(CC) ft_ls.c -o ft_ls $(LIBFT) 

recom :
	@$(CC) ft_ls.c -o ft_ls $(LIBFT) 
	
clean:
	@make -C ../libft clean
	@rm -rf $(OBJS)

fclean : clean
	@make -C ../libft fclean
	@/bin/rm -rf $(NAME)

re : fclean all

