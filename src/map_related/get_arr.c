/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-sokoban-joan-pau.merida-ruiz
** File description:
** get_arr
*/

#include "lib.h"

char **get_arr(int ac, char **av, s_general *info)
{
    struct stat info2;
    stat(av[1], &info2);
    char *buffer = malloc(sizeof(char) * (info2.st_size + 1));
    int fd = open(av[1], O_RDONLY);
    int rd = read(fd, buffer, info2.st_size);
    buffer[rd] = '\0';
    info->buffer = buffer;
    char **str_arr = my_str_to_word_array(buffer, '\n');
    return (str_arr);
}
