/*
** EPITECH PROJECT, 2022
** my_strcmp
** File description:
** Reproduce the behavior of the strcmp function.
*/

#include "c_lib.h"

int my_strcmp(char *str_1, char *str_2)
{
    int i = 0;

    if (my_strlen(str_1) != my_strlen(str_2))
        return (-1);
    while (str_1[i] != '\0' && str_2[i] != '\0') {
        if (str_1[i] != str_2[i])
            return (-1);
        i++;
    }
    return (0);
}
