/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** Write your my.h header file that contains the
** prototypes of all the functions exposed by your libmy.a
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    typedef struct l_screen {
        int x_count;
        int o_count;
        int mod_o_count;
        int blocked_x_count;
        int won_o_count;
        int x;
    } s_screen;

    typedef struct l_general {
        char **str_arr;
        char **str_arr_cpy;
        char *buffer;
        int screen;
        int columnlen;
        int rowlen;
        int p_i;
        int p_j;
        int terminal_row;
        int row;
        int terminal_col;
        int col;
        int key;
    } s_general;

#endif
