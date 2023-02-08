/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-sokoban-joan-pau.merida-ruiz
** File description:
** left
*/

#include "lib.h"

void move_left(s_general *info)
{
    if (info->str_arr[info->p_i][info->p_j - 1] == ' '
        || info->str_arr[info->p_i][info->p_j - 1] == 'O') {
        info->str_arr[info->p_i][info->p_j - 1] = 'P';
            info->str_arr[info->p_i][info->p_j] = ' ';
    }
    if (info->str_arr[info->p_i][info->p_j - 1] == 'X'
        && info->str_arr[info->p_i][info->p_j - 2] != '#'
        && info->str_arr[info->p_i][info->p_j - 2] != 'X') {
        info->str_arr[info->p_i][info->p_j] = ' ';
        info->str_arr[info->p_i][info->p_j - 1] = 'P';
        info->str_arr[info->p_i][info->p_j - 2] = 'X';
    }
}
