# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malena-b <mario3d93@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/21 20:58:33 by malena-b          #+#    #+#              #
#    Updated: 2024/12/03 13:36:51 by malena-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
USER = malena-b
CC = c++
CFLAGS = -Wall -Wextra -Werror -g #-std=c++98
SRC_DIR = ./
OBJ_DIR = obj/

DEF_COLOR	= \033[0;39m
MAGENTA		= \033[0;35m
YELLOW		= \033[0;33m
GREEN		= \033[0;32m
WHITE		= \033[0;37m
RESET		= \033[0m
GRAY		= \033[0;90m
BLUE		= \033[0;34m
CYAN		= \033[0;37m
RED			= \033[0;31m
BOLD		= \033[1m

SRC_FILES = megaphone

SRC = $(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC_FILES)))
OBJ = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

OBJF = .cache_exists

all: $(NAME)

$(NAME):	compiling	$(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)COMPLETE!$(RESET)"
	@echo

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp | $(OBJF)
	@echo "$(MAGENTA)COMPILING...		$(BLUE)$(notdir $<)$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: $(B_SRC_DIR)%.cpp | $(OBJF)
	@echo "$(MAGENTA)COMPILING...		$(BLUE)$(notdir $<)$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJF):
	@mkdir -p $(OBJ_DIR)

compiling:
	@echo "$(YELLOW)COMPILING PHILOSOPHERS FILES:$(RESET)"

clean:
	@rm -frf $(OBJ_DIR)

fclean:
	@rm -rf $(OBJ_DIR)
	@rm -rf $(NAME)
	@rm -rf $(BONUS_NAME)
	@echo "$(YELLOW)cpp_01 fclean:	 	$(GREEN)[COMPLETED]$(EC)"
	@echo

re: fclean all
	@echo "$(YELLOW)CPP_01: $(GREEN)[RECOMPILED]$(RESET)"

.PHONY: all clean fclean re compiling
