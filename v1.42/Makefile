#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kboddez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/02 09:52:09 by kboddez           #+#    #+#              #
#    Updated: 2016/08/14 12:36:34 by lfabbro          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

LIB_NAME = libft.a

SRC_NAME = main.c ft_start.c ft_checkbuf.c ft_exit.c ft_fillit.c \
	ft_replace.c ft_backtrack_step2.c ft_print_end.c ft_resolve.c \
	ft_onlyp.c ft_checkend.c ft_valid.c ft_side_buf.c ft_decode.c \
	ft_one.c ft_two.c ft_three.c ft_four.c ft_five.c ft_six.c ft_seven.c \
	ft_eight.c ft_nine.c ft_ten.c ft_eleven.c ft_twelve.c ft_thirteen.c \
	ft_fourteen.c ft_fifteen.c ft_sixteen.c ft_seventeen.c ft_eighteen.c \
	ft_nineteen.c ft_reboot.c ft_backtrack_step1.c

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC_PATH = ./
OBJ_PATH = ./
LIB_PATH = ./libft/
INC_PATH = ./

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
LIB = $(addprefix $(LIB_PATH),$(LIB_NAME))
INC = $(addprefix -I, $(INC_PATH))

all: $(NAME)

$(NAME):
	@printf "\033[33;32m=\033[33;33m=\033[33;31m= \033[33;37mCompilation libft\t:\t\033[33;31m"
	@make -C ./libft
	@echo "\033[33;32mDONE \033[33;32m=\033[33;33m=\033[33;31m="
	@printf "\033[33;32m=\033[33;33m=\033[33;31m= \033[33;37mCompilation fillit\t:\t\033[33;31m"
	@$(CC) $(CFLAGS) $(INC) $(LIB) $(SRC) -o $(NAME)
	@echo "\033[33;32mDONE \033[33;32m=\033[33;33m=\033[33;31m="

clean:
	@printf "\033[33;32m=\033[33;33m=\033[33;31m= \033[33;37mClean\t\t:\t\033[33;31m"
	@/bin/rm -f $(OBJ)
	@echo "\033[33;32mDONE \033[33;32m=\033[33;33m=\033[33;31m="

fclean: clean
	@printf "\033[33;32m=\033[33;33m=\033[33;31m= \033[33;37mFclean\t\t:\t\033[33;31m"
	@make fclean -C $(LIB_PATH)
	@/bin/rm -f $(NAME)
	@/bin/rm -f *~
	@/bin/rm -f ./*~
	@/bin/rm -f ./libft/libft.h.gch
	@/bin/rm -f *#
	@echo "\033[33;32mDONE \033[33;32m=\033[33;33m=\033[33;31m="

re: fclean all

