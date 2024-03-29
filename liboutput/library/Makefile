# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpeset-c <cpeset-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 19:14:32 by cpeset-c          #+#    #+#              #
#    Updated: 2023/02/19 20:09:14 by cpeset-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -=-=-=-=-	NAME -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

NAME    	= libft.a

MKFL		= Makefile

# -=-=-=-=-	CLRS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

DEF_CLR	:= \033[0;39m
GRAY	:= \033[0;90m
RED		:= \033[0;91m
GREEN	:= \033[0;92m
YELLOW	:= \033[0;93m
BLUE	:= \033[0;94m
MAGENTA	:= \033[0;95m
CYAN	:= \033[0;96m
WHITE	:= \033[0;97m

# -=-=-=-=-	PATH -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

FIS_DIR	= ft_is/
MEM_DIR	= ft_mem/
MTH_DIR	= ft_math/
STR_DIR	= ft_str/

INC_DIR	= inc/
SRC_DIR	= src/

OBJ_DIR	= .objs/
DEP_DIR	= .deps/

# -=-=-=-=-	CMND -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

CFLAGS	= -Wall -Wextra -Werror -W -O3
DFLAGS	= -MT $@ -MMD -MP
XFLAGS	= -fsanitize=address -g3

AR		= ar -rcs
RM		= rm -f
MK		= mkdir -p
CP		= cp -f

# -=-=-=-=-	FILE -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

INCLUDE	= -I./$(INC_DIR)

FIS_SRC	= ft_islower.c ft_isupper.c ft_isalpha.c ft_isprint.c \
		ft_isdigit.c ft_isalnum.c ft_issign.c ft_isspace.c ft_isascii.c \
		ft_ischrinstr.c

MEM_SRC	= ft_bzero.c ft_calloc.c ft_memcpy.c ft_strdup.c

MTH_SRC	= ft_absval.c ft_nbrlen.c ft_atoll.c ft_lltoa.c \
		ft_stou.c ft_stoul.c ft_unbrlen.c ft_ulltoa.c

STR_SRC	= ft_strchr.c ft_strcmp.c ft_strlen.c ft_substr.c \
		ft_strjoin.c

SRCS	+= $(addprefix $(SRC_DIR), $(addprefix $(FIS_DIR), $(FIS_SRC)))
SRCS	+= $(addprefix $(SRC_DIR), $(addprefix $(MEM_DIR), $(MEM_SRC)))
SRCS	+= $(addprefix $(SRC_DIR), $(addprefix $(MTH_DIR), $(MTH_SRC)))
SRCS	+= $(addprefix $(SRC_DIR), $(addprefix $(STR_DIR), $(STR_SRC)))

OBJS	= $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
DEPS	= $(addprefix $(DEP_DIR), $(addsuffix .d, $(basename $(SRCS))))

# -=-=-=-=-	RULE -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

$(OBJ_DIR)%.o: %.c $(MKFL)
	@$(MK) $(dir $@) $(dir $(subst $(OBJ_DIR), $(DEP_DIR), $@))
	@printf "\r$(GREEN)\tCompiling: $(YELLOW)$< $(DEF_CLR)                   \r"
	@$(CC) $(CFLAGS) $(DFLAGS) $(XFLAGS) $(INCLUDE) -c $< -o $@
	@mv $(patsubst %.o, %.d, $@) $(dir $(subst $(OBJ_DIR), $(DEP_DIR), $@))

all:
	@$(MAKE) $(NAME)

$(NAME):: $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@printf "\n\t$(WHITE)Library for \033[1;31m'libprint' $(WHITE)has been compiled!$(DEF_CLR)\n"

$(NAME)::
	@printf "\t$(WHITE)Nothing more to be done for utils library \033[1;31m'libprint'.$(DEF_CLR)\n"

-include $(DEPS)

clean:
	@$(RM) -r $(OBJ_DIR) $(DEP_DIR)
	@printf "\t$(CYAN)Removed all objects and dependencies for library \033[1;31m'libprint'.$(DEF_CLR)\n"

fclean: 
	@$(RM) -r $(OBJ_DIR) $(DEP_DIR)
	@$(RM) $(NAME)
	@printf "\t$(CYAN)Deleted library \033[1;31m'libprint'.$(DEF_CLR)\n"

re:
	@$(MAKE) fclean
	@$(MAKE) all
	@printf "\n\t$(GREEN)Library \033[1;31m'libprint' has been re-compiled.$(DEF_CLR)\n"

.PHONY: all clean fclean re
