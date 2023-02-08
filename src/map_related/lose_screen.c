/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-sokoban-joan-pau.merida-ruiz
** File description:
** screens
*/

#include "lib.h"

int losing_condition4(s_general *info, s_screen *info2, int *i, int *j)
{
    if (info->str_arr[*i][*j] == 'X' && info->str_arr[*i][*j - 1] == '#' &&
        info->str_arr[*i + 1][*j] == '#' &&
        info->str_arr[*i + 1][*j - 1] == '#') {
        info2->blocked_x_count++;
        if (info2->blocked_x_count == info2->x_count &&
            info->str_arr_cpy[*i][*j] != 'O')
            info->screen = 2;
        (*j)++;
        return (0);
    }
}

int losing_condition3(s_general *info, s_screen *info2, int *i, int *j)
{
    if (info->str_arr[*i][*j] == 'X' && info->str_arr[*i][*j + 1] == '#' &&
        info->str_arr[*i + 1][*j] == '#' &&
        info->str_arr[*i + 1][*j + 1] == '#') {
        info2->blocked_x_count++;
        if (info2->blocked_x_count == info2->x_count &&
            info->str_arr_cpy[*i][*j] != 'O')
            info->screen = 2;
        (*j)++;
        return (0);
    }
    losing_condition4(info, info2, i, j);
}

int losing_condition2(s_general *info, s_screen *info2, int *i, int *j)
{
    if (info->str_arr[*i][*j] == 'X' && info->str_arr[*i][*j + 1] == '#' &&
        info->str_arr[*i - 1][*j] == '#' &&
        info->str_arr[*i - 1][*j + 1] == '#') {
        info2->blocked_x_count++;
        if (info2->blocked_x_count == info2->x_count &&
            info->str_arr_cpy[*i][*j] != 'O')
            info->screen = 2;
        (*j)++;
        return (0);
    }
    losing_condition3(info, info2, i, j);
}

int losing_condition(s_general *info, s_screen *info2, int *i, int *j)
{
    if (info->str_arr[*i][*j] == 'X' && info->str_arr[*i][*j - 1] == '#' &&
        info->str_arr[*i - 1][*j] == '#' &&
        info->str_arr[*i - 1][*j - 1] == '#') {
        info2->blocked_x_count++;
        if (info2->blocked_x_count == info2->x_count &&
            info->str_arr_cpy[*i][*j] != 'O')
            info->screen = 2;
        (*j)++;
        return (0);
    }
    losing_condition2(info, info2, i, j);
    (*j)++;
}

int lose_screen(s_general *info, s_screen *info2)
{
    int i = 1;
    int j = 1;

    while (info->str_arr[i] != NULL) {
        while (info->str_arr[i][j] != '\0')
            losing_condition(info, info2, &i, &j);
        i++;
        j = 1;
    }
}
