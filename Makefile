# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/08 13:46:20 by aherreri          #+#    #+#              #
#    Updated: 2024/12/17 16:17:35 by aherreri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = rcs

NAME = libft.a
OBJS = ft_isalpha.o \
       ft_isdigit.o \
       ft_isalnum.o \
       ft_isascii.o \
       ft_isprint.o \
       ft_strlen.o \
       ft_memset.o \
       ft_bzero.o \
       ft_memcpy.o \
       ft_memmove.o \
       ft_strlcpy.o \
       ft_strlcat.o \
       ft_toupper.o \
       ft_tolower.o \
       ft_strchr.o \
       ft_strrchr.o \
       ft_strncmp.o \
       ft_memchr.o \
       ft_memcmp.o \
       ft_strnstr.o \
       ft_atoi.o \
       ft_calloc.o \
       ft_strdup.o \
       ft_substr.o \
       ft_strjoin.o \
	   ft_strtrim.o \
	   ft_split.o \
	   ft_itoa.o \
       

all: $(NAME)
	
$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf *.o
	rm -f $(OBJS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all
