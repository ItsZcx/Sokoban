/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-sokoban-joan-pau.merida-ruiz
** File description:
** errors
*/

#include "lib.h"


int err_x_count(char *buffer)
{
    int x_count = 0;

    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == 'X')
            x_count++;
    }
    return (x_count);
}

int err_o_count(char *buffer)
{
    int o_count = 0;

    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == 'O')
            o_count++;
    }
    return (o_count);
}

int counts_and_frees(int fd, char *buffer)
{
    if (err_o_count(buffer) != err_x_count(buffer)) {
        close(fd);
        free(buffer);
        return (84);
    }
    close(fd);
    free(buffer);
}

int handle_chars(int ac, char **av)
{
    struct stat info;
    int er = stat(av[1], &info);
    char *buffer = NULL;

    if (er == -1 || S_ISREG(info.st_mode) == false)
        return (84);
    buffer = malloc(sizeof(char) * (info.st_size + 1));
    int fd = open(av[1], O_RDONLY);
    int rd = read(fd, buffer, info.st_size);
    if (rd == -1 || rd == 0)
        return (84);
    buffer[rd] = '\0';
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] != 'P' && buffer[i] != '#' && buffer[i] != '\n'
            && buffer[i] != 'O' && buffer[i] != ' '
            && buffer[i] != 'X' && buffer[i] != '\0')
            return (84);
    }
    if (counts_and_frees(fd, buffer) == 84)
        return (84);
}

int error_handle(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (my_strcmp(av[1], "-h") == -1 && handle_chars(ac, av) == 84)
        return (84);
}
