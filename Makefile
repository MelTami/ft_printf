# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 21:43:43 by mvavasso          #+#    #+#              #
#    Updated: 2022/06/22 04:45:54 by mvavasso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a

CC				= cc
CFLAGS			= -Wall -Werror -Wextra

RM				= rm -rf
AR				= ar rcs
			
PATH_INCLUDES	= ./includes/
PATH_OBJS		= ./objects/
PATH_SRCS		= ./sources/

SRCS			= $(addprefix $(PATH_SRCS), ft_converthex.c\
					ft_convertint.c\
					ft_itoa.c\
					ft_printf.c\
					ft_putchar.c\
					ft_putbase.c\
					ft_putstr.c\
					ft_strlen.c\
					ft_convertptr.c\
					ft_convertu.c\
					ft_free.c\
					ft_substr.c)

OBJS 			= $(patsubst $(PATH_SRCS)%.c, $(PATH_OBJS)%.o, $(SRCS))
INCLUDES		= -I $(PATH_INCLUDES)

all:	$(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)


$(PATH_OBJS)%.o: $(PATH_SRCS)%.c
	mkdir -p $(PATH_OBJS)
	cc $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
		$(RM) $(PATH_OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re