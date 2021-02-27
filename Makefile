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
		ft_substr.c ft_strjoin.c

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CLIB) $(NAME) $(OBJ)

%.o: %.c %.h
	$(CC) -o $@ $< $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

so: 
	$(CC) -fPIC $(CFLAGS) $(FILES)
	gcc -shared -o libft.so $(OBJ)
