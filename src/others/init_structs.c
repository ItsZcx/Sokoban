/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-sokoban-joan-pau.merida-ruiz
** File description:
** init_structs
*/

#include "lib.h"

s_screen *init_structs2(void)
{
    s_screen *info2 = malloc(sizeof(s_screen));

    info2->x_count = 0;
    info2->o_count = 0;
    info2->mod_o_count = 0;
    info2->blocked_x_count = 0;
    info2->won_o_count = 0;
    return (info2);
}

s_general *init_structs(int ac, char **av)
{
    s_general *info = malloc(sizeof(s_general));

    info->buffer = NULL;
    info->p_i = 0;
    info->p_j = 0;
    info->row = 0;
    info->terminal_row = 0;
    info->col = 0;
    info->terminal_col = 0;
    info->key = -1;
    info->screen = 1;
    info->str_arr = get_arr(ac, av, info);
    info->str_arr_cpy = get_arr(ac, av, info);
    info->columnlen = my_columlen(info->str_arr[1]);
    info->rowlen = my_bsn_count(info->buffer);
    return (info);
}
