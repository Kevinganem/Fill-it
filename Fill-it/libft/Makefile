# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kganem <kganem@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/03 16:55:24 by kganem            #+#    #+#              #
#    Updated: 2016/10/14 17:57:33 by kganem           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_itoa.c \
	   ft_lstadd.c \
	   ft_lstat.c \
	   ft_lstcount.c \
	   ft_lstdel.c \
	   ft_lstdelone.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
	   ft_lstnew.c \
	   ft_lstrev.c \
	   ft_memalloc.c \
	   ft_memccpy.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memcpy.c \
	   ft_memdel.c \
	   ft_memmove.c \
	   ft_memset.c \
	   ft_putchar.c \
	   ft_putchar_fd.c \
	   ft_putendl.c \
	   ft_putendl_fd.c \
	   ft_putnbr.c \
	   ft_putnbr_fd.c \
	   ft_putstr.c \
	   ft_putstr_fd.c \
	   ft_strcat.c \
	   ft_strchr.c \
	   ft_strclr.c \
	   ft_strcmp.c \
	   ft_strcpy.c \
	   ft_strdel.c \
	   ft_strdup.c \
	   ft_strequ.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strjoin.c \
	   ft_strlcat.c \
	   ft_strlen.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strncat.c \
	   ft_strncmp.c \
	   ft_strncpy.c \
	   ft_strnequ.c \
	   ft_strnew.c \
	   ft_strnstr.c \
	   ft_strrchr.c \
	   ft_strsplit.c \
	   ft_strstr.c \
	   ft_strsub.c \
	   ft_strtrim.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   ft_strcount.c

OBJ = $(SRCS:.c=.o)

GCC = gcc -Wall -Wextra -Werror

$(NAME):
	@echo "\033[36m🔒  Libft 🔒 \033[0m"
	@echo "\033[36m♻️  Compiling ♻️ \033[0m"
	@$(GCC) -c $(SRCS)
	@echo "\033[36m📖  Creating library 📖 \033[0m"
	@ar rc $(NAME) $(OBJ)
	@echo "\033[36m🚀  Increase the search speed 🚀 \033[0m"
	@ranlib $(NAME)
	@echo "\033[32m🔓  Library created 🔓 \033[0m"

all: $(NAME)

clean:
	@echo "\033[31m🗑  Deleting all .o 🗑 \033[31m"
	@rm -rf $(OBJ)
	@echo "\033[32m🗑  The folder is clean 🗑 \033[32m"

fclean: clean
	@echo "\033[31m🗑  Deleting Library.a and all .o 🗑 \033[31m"
	@rm -rf $(NAME) $(OBJ)
	@echo "\033[32m🗑  The folder is clean 🗑 \033[32m"

re: fclean  all

norme:
	norminette 

.PHONY: all, clean, fclean, re, norme
