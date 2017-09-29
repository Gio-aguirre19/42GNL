# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/28 19:30:20 by gaguirre          #+#    #+#              #
#    Updated: 2017/09/28 19:36:59 by gaguirre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

COMPILE = gcc

C = -c

FLAGS =  -Wall -Wextra -Werror

S = srcs/

SRCS = ft_strsub.c ft_strlen.c ft_strdup.c ft_strjoin.c ft_bzero.c ft_strnew.c

OBJECTS =    ft_strsub.o ft_strlen.o ft_strdup.o ft_strjoin.o ft_bzero.o ft_strnew.o

TEST_OUTFILE = -o test

TEST_MAIN = main.c

INCLUDES = -I./

all: $(NAME)

$(NAME):
	$(COMPILE) $(C) $(FLAGS) $(SRCS) $(INCLUDES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

test:
	$(COMPILE) $(SRCS) $(TEST_MAIN) $(INCLUDES) $(TEST_OUTFILE)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f test

re: fclean all
