# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agallipo <agallipo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 18:57:07 by agallipo          #+#    #+#              #
#    Updated: 2022/06/07 19:24:02 by agallipo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philosopher

CC := gcc

LIBFTDIR = libft/
INCLUDE :=  -I includes/
HEADERFILES := includes/philosopher.h

SRCS :=	main.c \
		
OBJS := $(SRCS:%.c=obj/%.o)

CFLAGS := $(INCLUDE) -I $(HOME)-Wall -Werror -Wextra #-fsanitize=address -g

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFTDIR)
	$(CC) $(LDFLAGS) $(OBJS) -o $@

obj/%.o: srcs/%.c $(HEADERFILES)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	make -sC $(LIBFTDIR) clean
	rm -rf $(OBJS) libft.a

fclean: clean
	make -sC $(LIBFTDIR) fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re