/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-myls-joan-pau.merida-ruiz
** File description:
** prototypes
*/

#ifndef LIB_H_
    #define LIB_H_

    #include "c_lib.h"
    #include "struct.h"
    #include <ncurses.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <stdio.h>

    char **get_arr(int ac, char **av, s_general *info);
    int help(int ac, char **av);
    s_general *init_structs(int ac, char **av);
    s_screen *init_structs2(void);
    void display_map(s_general *info, int ac, char **av);
    void move_down(s_general *info);
    void move_left(s_general *info);
    void o_keep(s_general *info, s_screen *info2);
    int player_movement(s_general *info);
    void player_pos(s_general *info);
    void move_right(s_general *info);
    void move_up(s_general *info);
    int error_handle(int ac, char **av);
    int my_bsn_count(char *str);
    int lose_screen(s_general *info, s_screen *info2);
    void x_count(s_general *info, s_screen *info2);
    void o_count(s_general *info, s_screen *info2);


#endif
