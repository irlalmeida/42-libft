# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/01 14:12:10 by iribeiro          #+#    #+#              #
#    Updated: 2021/03/06 23:47:37 by iribeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

HEADER = libft.h

CLIB = ar -rcs

CFLAGS =-Wall \
		-Wextra \
		-Werror \

FILES = ft_atoi.c     ft_isalpha.c \
		ft_strlcat.c  ft_strnstr.c \
		ft_bzero.c    ft_isascii.c \
		ft_strlcpy.c  ft_strrchr.c \
		ft_calloc.c   ft_isdigit.c \
		ft_strlen.c   ft_tolower.c \
		ft_isalnum.c  ft_isprint.c \
		ft_strncmp.c  ft_toupper.c \
		ft_memccpy.c  ft_memmove.c \
		ft_memchr.c   ft_memset.c \
		ft_memcpy.c   ft_strdup.c \
		ft_memcmp.c   ft_strchr.c \
		ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_putchar_fd.c \
		ft_substr.c ft_strjoin.c \
		ft_strmapi.c ft_itoa.c	\
		ft_strtrim.c ft_split.c

FILES_BONUS = ft_lstiter.c ft_lstlast.c \
				ft_lstnew.c ft_lstsize.c \
				ft_lstadd_back.c ft_lstadd_front.c \
				ft_lstclear.c ft_lstdelone.c \
				ft_lstmap.c

OBJ = $(FILES:.c=.o)
OBJ_BONUS = $(FILES_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CLIB) $(NAME) $(OBJ)

%.o: %.c %.h
	$(CC) -o $@ $< $(CFLAGS)

bonus: $(NAME)
$(NAME): $(OBJ_BONUS)
	$(CLIB) $(NAME) $(OBJ_BONUS)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

rebonus:
	$(MAKE) fclean
	$(MAKE) bonus

.PHONY:	all clean fclean re bonus rebonus
