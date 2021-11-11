# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 17:41:07 by nvasilev          #+#    #+#              #
#    Updated: 2021/11/11 17:44:05 by nvasilev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROJECT_NAME =	print_bits
AUTHOR =		Nikita VASILEV

################################################################################
#                                     CONFIG                                   #
################################################################################

NAME = libbits.a

CFLAGS = -Wall -Wextra -Werror

################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRC_DIR = srcs
UTILS_DIR = utils
PATH_HEADER = ./includes/print_bits.h

SRCS := $(wildcard $(SRC_DIR)/*.c)
UTILS := $(wildcard $(UTILS_DIR)/*.c)

################################################################################
#                                     OBJECTS                                  #
################################################################################

OBJS = $(SRCS:.c=.o) $(UTILS:.c=.o)

LINK = ar rc
INDEX = ranlib

################################################################################
#                                     RULES                                    #
################################################################################

all:	header $(NAME)

.c.o:	$(CC) $(CFLAGS) -I $(PATH_HEADER) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
	$(LINK) $(NAME) $(OBJS)
	$(INDEX) $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

so:
	$(CC) -shared -o libft.so $(OBJS)

.PHONY:	all clean fclean re so prod

include header.mk
