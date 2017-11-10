# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 12:39:33 by ratroncy          #+#    #+#              #
#    Updated: 2017/11/09 12:52:31 by ratroncy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS_DIR=./

INC_DIR=./

RAW_INC=./*.h

RAW_SRCS=./*.c

OBJ=./*.o

SRCS=$(addprefix $(SRCS_DIR)/,$(RAW_SRCS))

INC=$(addprefix $(INC_DIR)/,$(RAW_INC))

$(NAME):
			gcc -c -Wall -Wextra -Werror $(RAW_SRCS) $(RAW_INC)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)

all: $(NAME)

clean:
			@rm -f $(OBJ)

fclean: clean
			@rm -f $(NAME)

re: fclean all
