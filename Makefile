# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 19:17:38 by amagnell          #+#    #+#              #
#    Updated: 2022/12/03 18:17:09 by amagnell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -MD
INCLUDE = libft.h
SOURCES =  ft_isalpha.c \
		   ft_isdigit.c \
		   ft_isalnum.c \
		   ft_isascii.c \
		   ft_isprint.c \
		   ft_strlen.c \
		   ft_memset.c \
		   ft_bzero.c \
		   ft_memcpy.c \
		   ft_memmove.c \
		   ft_strlcpy.c \
		   ft_strlcat.c \
		   ft_toupper.c \
		   ft_tolower.c \
		   ft_strchr.c \
		   ft_strrchr.c\
		   ft_strncmp.c\
		   ft_memchr.c \
		   ft_memcmp.c \
		   ft_strnstr.c \
		   ft_atoi.c \
		   ft_calloc.c \
		   ft_strdup.c \
		   ft_substr.c \
		   ft_strjoin.c \
		   ft_strtrim.c \
		   ft_putchar_fd.c \
		   ft_putstr_fd.c \
		   ft_putendl_fd.c \
		   ft_putnbr_fd.c \
		   ft_striteri.c \
		   ft_strmapi.c \
		   ft_itoa.c \
		   ft_split.c

OBJECTS = $(SOURCES:.c=.o) 

DEP = $(SOURCES:.c=.d)

$(NAME) : $(OBJECTS)
	ar -rsc $@ $(OBJECTS)


all : $(NAME)

fclean : clean
	rm -f $(NAME)

clean :
	rm -f $(OBJECTS) $(DEP)

re : fclean all

.PHONY: all re clean fclean

-include $(DEP) 
