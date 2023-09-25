# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 19:17:38 by amagnell          #+#    #+#              #
#    Updated: 2023/09/25 19:18:44 by amagnell         ###   ########.fr        #
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

BONUS_SOURCES = ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c

OBJECTS = $(SOURCES:.c=.o)

BONUS_OBJ = $(BONUS_SOURCES:.c=.o)

DEP = $(SOURCES:.c=.d)

BONUS_DEP = $(BONUS_SOURCES:.c=.d)

$(NAME) : $(OBJECTS)
	ar -rsc $@ $(OBJECTS)

bonus: $(BONUS) $(BONUS_OBJ)
	ar -rsc $(NAME) $^
	
all : $(NAME)

fclean : clean
	rm -f $(NAME)

clean :
	rm -f $(OBJECTS) $(BONUS_OBJ) $(DEP) $(BONUS_DEP)

re : fclean all

.PHONY: all re clean fclean bonus

-include $(DEP) $(BONUS_DEP) 
