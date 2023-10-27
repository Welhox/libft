# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clundber <clundber@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 11:59:53 by clundber          #+#    #+#              #
#    Updated: 2023/10/27 19:28:06 by clundber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILES = testmain.c ft_atoi.c

OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)
