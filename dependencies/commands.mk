# Project: clift

# -=-=-=-=-	CMND -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==- #

CC		= cc
CFLAGS	= -Wall -Werror -Wextra -W
DFLAGS	= -MT $@ -MMD -MP
XFLAGS	= -g3 -fsanitize=address
AR		= ar rcs
RM		= rm -f
MK		= mkdir -p
CP		= cp -f
