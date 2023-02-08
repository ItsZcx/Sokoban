/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-sokoban-joan-pau.merida-ruiz
** File description:
** x_count
*/

#include "lib.h"

void x_count_if(s_general *info, s_screen *info2, int i, int j)
{
    if (info->str_arr[i][j] == 'X')
        info2->x_count++;
}

void x_count(s_general *info, s_screen *info2)
{
    int i = 0;
    int j = 0;

    while (info->str_arr[i] != NULL) {
        while (info->str_arr[i][j] != '\0') {
            x_count_if(info, info2, i, j);
            j++;
        }
        i++;
        j = 0;
    }
}
