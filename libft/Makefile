# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/09 21:15:32 by gaguirre          #+#    #+#              #
#    Updated: 2017/09/26 19:34:49 by gaguirre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strdup.c ft_strjoin.c /
			ft_strlen.c
			ft_strsub.c

FLAGS = -Wall -Wextra -Werror -I .

BIN = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(BIN)
		@ar rc $@ $^

%.o: %.c
		@gcc -c $(FLAGS) libft.h $< -o $@

clean:
		@rm -rf $(BIN)

fclean: clean
		@rm -rf $(NAME)

re: fclean all
