# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alusnia <alusnia@student.42Warsaw.pl>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/05 17:53:29 by alusnia           #+#    #+#              #
#    Updated: 2026/02/16 18:12:02 by alusnia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -g -Wall -Werror -Wextra -I$(INCS_DIR)

SRCS_DIR	= ./srcs

SRCS = ft_substr.c ft_putnbr_fd.c ft_isdigit.c ft_atoi.c ft_isalpha.c ft_islower.c \
        ft_isupper.c ft_memmove.c ft_isprint.c ft_memchr.c ft_striteri.c ft_putendl_fd.c \
        ft_strmapi.c ft_strrchr.c ft_toupper.c ft_memset.c ft_itoa.c \
        ft_isalnum.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_strjoin.c \
        ft_strlcat.c ft_strdup.c ft_memcmp.c ft_memcpy.c ft_bzero.c ft_tolower.c \
        ft_strchr.c ft_strncmp.c ft_strnstr.c ft_strlcpy.c ft_strlen.c \
        ft_calloc.c ft_isascii.c ft_split.c ft_putptr_fd.c ft_puthex_fd.c ft_putunbr_fd.c \
		ft_putflt_fd.c ft_isspace.c ft_atod.c ft_putdbl_fd.c ft_atol.c ft_matrixlen.c \
		ft_matrixjoin.c ft_matrixclear.c

BONUS_SRCS =  ft_lstsize.c ft_lstnew.c ft_lstlast.c ft_lstdelone.c ft_lstclear.c \
		ft_lstadd_front.c ft_lstadd_back.c ft_lstiter.c ft_lstmap.c

OBJS_DIR 	= ./objs

OBJS = $(addprefix $(OBJS_DIR)/,$(SRCS:.c=.o))

BONUS_OBJS = $(addprefix $(OBJS_DIR)/,$(BONUS_SRCS:.c=.o))

INCS_DIR	= ./incs

INCS		= $(addprefix $(INCS_DIR),/libft.h /libft_bonus.h)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "$(NAME): Done!"

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c $(INCS) | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

bonus: $(NAME) $(BONUS_OBJS)
	@ar rcs $(NAME) $(BONUS_OBJS)
	@echo "$(NAME): Done!"

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
