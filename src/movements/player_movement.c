/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-sokoban-joan-pau.merida-ruiz
** File description:
** player_movement
*/

#include "lib.h"

int player_movement(s_general *info)
{
    s_screen *info2 = init_structs2();

    o_count(info, info2);
    x_count(info, info2);
    if (info2->o_count != info2->x_count) {
        endwin();
        return (84);
    }
    player_pos(info);
    info->key = getch();
    if (info->key == 119 || info->key == 87 || info->key == KEY_UP)
        move_up(info);
    if (info->key == 115 || info->key == 83 || info->key == KEY_DOWN)
        move_down(info);
    if (info->key == 97 || info->key == 65 || info->key == KEY_LEFT)
        move_left(info);
    if (info->key == 100 || info->key == 68 || info->key == KEY_RIGHT)
        move_right(info);
    o_keep(info, info2);
    lose_screen(info, info2);
}
