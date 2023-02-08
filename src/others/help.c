/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-sokoban-joan-pau.merida-ruiz
** File description:
** help
*/

#include "lib.h"

int help(int ac, char **av)
{
    if (my_strcmp(av[1], "-h") == 0) {
        my_putstr("USAGE\n");
        my_putstr("    ./my_sokoban [map]\n\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("    map file representing the warehouse map,");
        my_putstr("containing '#' for walls,\n");
        my_putstr("    'P' for the player, 'X' for boxes and 'O'");
        my_putstr("for storage locations.\n");
    }
    return (0);
}
