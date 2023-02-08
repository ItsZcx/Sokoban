/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-sokoban-joan-pau.merida-ruiz
** File description:
** my_sokoban
*/

#include "lib.h"

int my_sokoban(int ac, char **av)
{
    s_general *info = init_structs(ac, av);

    noecho();
    keypad(initscr(), TRUE);
    while (info->screen == 1) {
        clear();
        getmaxyx(stdscr, info->terminal_row, info->terminal_col);
        info->row = (info->terminal_row - info->rowlen) / 2;
        info->col = (info->terminal_col - info->columnlen) / 2;
        display_map(info, ac, av);
        if (player_movement(info) == 84)
            return (84);
        refresh();
    }
    endwin();
    if (info->screen == 2)
        return (1);
    if (info->screen == 3)
        return (0);
}

int my_sokobug(int ac, char **av)
{
    if (my_strcmp(av[1], "-h") == -1) {
        switch (my_sokoban(ac, av)) {
            case 1:
                return (1);
            case 0:
                return (0);
            case 84:
                return (84);
            default:
                break;
        }
    }
    return (0);
}

int main(int ac, char **av)
{
    if (error_handle(ac, av) == 84)
        return (84);
    help(ac, av);
    return (my_sokobug(ac, av));
}
