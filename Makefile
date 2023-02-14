# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 13:11:26 by dojeanno          #+#    #+#              #
#    Updated: 2023/02/14 13:57:12 by dojeanno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -rf

LIB			=	ar rcs

SRCS		=	ft_isalpha.c\
				ft_isdigit.c\
				ft_isalnum.c\
				ft_isascii.c\
				ft_isprint.c\
				ft_strlen.c\
				ft_memset.c\
				ft_bzero.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_tolower.c\
				ft_toupper.c\
				ft_atoi.c\

OBJS		=	$(SRCS:.c=.o)

SRCS_BONUS	=	


OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)

all :		$(NAME)
	
$(NAME):	$(OBJS)
			$(LIB) $(NAME) $(OBJS)

bonus :		$(OBJS) $(OBJS_BONUS)
			$(LIB) $(NAME) $(OBJS) $(OBJS_BONUS)

clean :		
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean :	clean
			$(RM) $(NAME)
re :		fclean all

.PHONY :	all bonus clean fclean re
