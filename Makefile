# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/25 02:16:49 by jyim              #+#    #+#              #
#    Updated: 2015/03/13 17:14:50 by ael-kadh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME		=	formatter
NAMED		=	libasm

SRCS		=	$(wildcard src/*.s)
SRCS_C		=	$(wildcard tests/*.c)

OBJS		=	$(SRCS:.s=.o)

NASM		=	~/.brew/bin/nasm
NASMFLAGS	=	-f macho64

RM			=	rm -f
OK			=	"\033[35m"OK"\033[00m"

all: $(NAMED) $(NAME)

$(NAMED): $(OBJS)
	@echo "Compiling" [ $(NAME) ] "..." $(OK)

$(NAME):
	gcc -w $(OBJS) $(SRCS_C) -o $(NAME)


%.o: %.s
	$(NASM) $(NASMFLAGS) -o $@ $<

clean:
	rm -f $(OBJS)
	@echo "Cleaning" [ $(NAME) ] "..." $(OK)

fclean: clean
	rm -f $(NAME)
	@echo "Delete" [ $(NAME) ] "..." $(OK)

re: fclean all

.PHONY: all clean fclean re
