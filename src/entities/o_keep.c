/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-sokoban-joan-pau.merida-ruiz
** File description:
** o_keep
*/

#include "lib.h"

void o_keep_if(s_general *info, s_screen *info2, int i, int j)
{
    if (info->str_arr_cpy[i][j] == 'O' && info->str_arr[i][j] == ' ')
        info->str_arr[i][j] = 'O';
    if (info->str_arr_cpy[i][j] == 'O' &&
        info->str_arr[i][j] == 'X' && info2->o_count == 1)
            info->screen = 3;
    if (info->str_arr_cpy[i][j] == 'O' && info->str_arr[i][j] == 'X') {
        info2->won_o_count++;
        if (info2->won_o_count == info2->o_count)
            info->screen = 3;
    }
}

void o_keep(s_general *info, s_screen *info2)
{
    int j = 0;
    int i = 0;

    while (info->str_arr_cpy[i] != NULL) {
        while (info->str_arr_cpy[i][j] != '\0') {
            o_keep_if(info, info2, i, j);
            j++;
        }
        i++;
        j = 0;
    }
}
