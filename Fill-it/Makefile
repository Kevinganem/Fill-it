# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kganem <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/14 16:45:26 by kganem            #+#    #+#              #
#    Updated: 2016/10/14 18:00:10 by kganem           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c \
	 algo_tools.c \
	 check_tetris.c \
	 create_conf.c \
	 create_tetris.c \
	 fillit.c \
	 grid_op.c \
	 algo.c \
	 read_file.c 

OBJDIR = ./obj/
SRCDIR = ./src/

OBJ = $(SRC:.c=.o)

INCLUDE = include/fillit.h

GCC = gcc -Wall -Wextra -Werror -Iinclude/

OBJPATH = $(addprefix $(OBJDIR),$(OBJ))

$(NAME): $(OBJPATH)
		@make -C libft -j 8
		@echo "\033[36m🔒  Fill-it 🔒 \033[0m"
		@echo "\033[36m♻️  Compiling ♻️ \033[0m"
		@$(GCC) $(OBJPATH) -o $(NAME) -L./libft -lft
		@gcc -Wall -Werror -Wextra $(OBJPATH) -L libft/ -lft -o $(NAME)
		@echo "\033[32m🔓  Fill-it created 🔓 \033[0m"

$(OBJDIR)%.o:	$(SRCDIR)%.c
		@mkdir -p ./obj/
		@gcc -Wall -Wextra -Werror -I./libft -c $< -o $@

clean:
		@make -C libft/ clean
		@/bin/rm -rf obj/*.o

fclean: clean
		@make -C libft/ fclean
		@/bin/rm -f $(NAME)

all: $(NAME)

re: fclean all

.PHONY: clean fclean re all
