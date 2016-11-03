#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kboddez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/02 09:52:09 by kboddez           #+#    #+#              #
#    Updated: 2016/04/04 11:57:55 by kboddez          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

LIB = libfil.a

MAIN = main.c

SRC = ft_start.c ft_checkbuf.c ft_exit.c ft_fillit.c ft_filling.c \
	ft_replace.c ft_backtrack.c ft_print_end.c ft_reload.c  \
	ft_onlyp.c ft_move.c ft_reboot.c ft_side_final.c \
	ft_movestart.c ft_nbrltr.c ft_checkend.c ft_place_bis.c \
	ft_rebootbuf.c ft_transit.c ft_side_buf.c

SRCO = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Wextra -Werror $(SRC)
	@ar rc $(LIB) $(SRCO)
	@ranlib $(LIB)
	@gcc -Wall -Wextra -Werror $(MAIN) -L. -lft -lfil -o $(NAME)
	@echo "\033[33;32m=\033[33;33m=\033[33;31m= \033[33;37mCompilation\t:\t\033[33;32mDONE \033[33;32m=\033[33;33m=\033[33;31m="

clean:
	@/bin/rm -f *.o
	@echo "\033[33;32m=\033[33;33m=\033[33;31m= \033[33;37mClean\t:\t\033[33;32mDONE \033[33;32m=\033[33;33m=\033[33;31m="

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[33;32m=\033[33;33m=\033[33;31m= \033[33;37mFclean\t:\t\033[33;32mDONE \033[33;32m=\033[33;33m=\033[33;31m="

cleanall: fclean
	@/bin/rm -f *~
	@/bin/rm -f libft.h.gch
	@/bin/rm -f *#
	@echo "\033[33;32m=\033[33;33m=\033[33;31m= \033[33;37mCleanAll\t:\t\033[33;32mDONE \033[33;32m=\033[33;33m=\033[33;31m="

re: cleanall all

