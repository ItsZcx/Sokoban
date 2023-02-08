##
## EPITECH PROJECT, 2022
## makefile
## File description:
## Makefile
##

NAME =	my_sokoban

SRC	=	src/my_sokoban.c \
		src/others/help.c \
		src/others/init_structs.c \
		src/movements/move_down.c \
		src/movements/move_left.c \
		src/movements/player_movement.c \
		src/movements/move_right.c \
		src/movements/move_up.c \
		src/error_handling/errors.c \
		src/entities/player_pos.c \
		src/entities/o_keep.c \
		src/entities/o_count.c \
		src/entities/x_count.c \
		src/map_related/display_map.c \
		src/map_related/get_arr.c \
		src/map_related/lose_screen.c \
		src/map_related/my_bsn_count.c

OBJ =	$(SRC:.c=.o)

LIBMY =	-C lib/c-lib

LIBR = -L lib/c-lib/ -lmy

CFLAGS += -I ./include/ -I ./lib/c-lib/include -g3

all: $(NAME)

$(NAME): make_lib $(OBJ)
	gcc -o $(NAME) $(OBJ) $(LIBR) -lncurses
	rm -f ./src/*.o
	rm -f ./src/entities/*.o
	rm -f ./src/error_handling/*.o
	rm -f ./src/map_related/*.o
	rm -f ./src/movements/*.o
	rm -f ./src/others/*.o

make_lib:
	$(MAKE) $(LIBMY)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf coding-style-reports.log
	make fclean -C ./lib/c-lib/

re: fclean all
