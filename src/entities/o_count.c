/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-sokoban-joan-pau.merida-ruiz
** File description:
** o_count
*/

#include "lib.h"

void o_count_if(s_general *info, s_screen *info2, int i, int j)
{
    if (info->str_arr_cpy[i][j] == 'O')
        info2->o_count++;
    if (info->str_arr[i][j] == 'O')
        info2->mod_o_count++;
}

void o_count(s_general *info, s_screen *info2)
{
    int i = 0;
    int j = 0;

    while (info->str_arr_cpy[i] != NULL) {
        while (info->str_arr_cpy[i][j] != '\0') {
            o_count_if(info, info2, i, j);
            j++;
        }
        i++;
        j = 0;
    }
}
