/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-sokoban-joan-pau.merida-ruiz
** File description:
** display_map
*/

#include "lib.h"

void display_map(s_general *info, int ac, char **av)
{
    if (info->key == 32)
        info->str_arr = get_arr(ac, av, info);
    if (info->rowlen >= info->terminal_row ||
        info->columnlen >= info->terminal_col) {
        mvprintw(info->row + 5, info->col - 2, "%s\n", "Window Too Small!");
    } else {
        for (int i = 0; info->str_arr[i] != NULL; i++)
            mvprintw(info->row + i, info->col, "%s\n", info->str_arr[i]);
    }
}
