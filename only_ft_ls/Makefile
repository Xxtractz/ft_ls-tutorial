# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/18 17:20:48 by mbaloyi           #+#    #+#              #
#    Updated: 2018/06/12 11:27:14 by mbaloyi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a	
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c \
	   ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isspace.c ft_isprint.c \
	   ft_itoa.c ft_memalloc.c ft_memccpy.c ft_memchr.c \
	   ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c \
	   ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c \
	   ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c \
	   ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c \
	   ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c \
	   ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c \
	   ft_strlcat.c ft_length.c ft_strmap.c ft_strmapi.c \
	   ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c \
	   ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c \
	   ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c \
	   ft_put_wchar.c ft_putnbr_long.c get_next_line.c

OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME) : $(OBJS)
	@echo "\033[1;32mCreated -- $@\033[0m"
	@ar rc $(NAME) $(OBJS) 
	@ranlib $(NAME)

%.o: %.c
	@echo "     \033[0;32mCompiling -- $@ \033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean : clean
	@/bin/rm -rf $(NAME)

re : fclean all

norm : 
	@norminette $(wordlist 1, 10, $(SRCS))
	@norminette $(wordlist 11, 20, $(SRCS))
	@sleep 5
	@norminette $(wordlist 21, 30, $(SRCS))
	@norminette $(wordlist 31, 40, $(SRCS))
	@norminette $(wordlist 41, 50, $(SRCS))
