/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-sokoban-joan-pau.merida-ruiz
** File description:
** player_pos
*/

#include "lib.h"

void player_pos_if(s_general *info, int i, int j)
{
    if (info->str_arr[i][j] == 'P') {
        info->p_i = i;
        info->p_j = j;
    }
}

void player_pos(s_general *info)
{
    int j = 0;
    int i = 0;

    while (info->str_arr[i] != NULL) {
        while (info->str_arr[i][j] != '\0') {
            player_pos_if(info, i, j);
            j++;
        }
        i++;
        j = 0;
    }
}
