# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clundber <clundber@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 11:59:53 by clundber          #+#    #+#              #
#    Updated: 2023/10/27 19:16:33 by clundber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = testmain.c ft_atoi.c

OFILES = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME) clean

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean:
	clean rm -f $(NAME)
	
re: fclean $(NAME)
