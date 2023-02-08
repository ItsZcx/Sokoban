/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-sokoban-joan-pau.merida-ruiz
** File description:
** up
*/

#include "lib.h"

void move_up(s_general *info)
{
    if (info->str_arr[info->p_i - 1][info->p_j] == ' '
        || info->str_arr[info->p_i - 1][info->p_j] == 'O') {
        info->str_arr[info->p_i - 1][info->p_j] = 'P';
        info->str_arr[info->p_i][info->p_j] = ' ';
    }
    if (info->str_arr[info->p_i - 1][info->p_j] == 'X'
        && info->str_arr[info->p_i - 2][info->p_j] != '#'
        && info->str_arr[info->p_i - 2][info->p_j] != 'X') {
        info->str_arr[info->p_i][info->p_j] = ' ';
        info->str_arr[info->p_i - 1][info->p_j] = 'P';
        info->str_arr[info->p_i - 2][info->p_j] = 'X';
    }
}
