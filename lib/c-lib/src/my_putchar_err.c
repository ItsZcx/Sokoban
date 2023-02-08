/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-myls-joan-pau.merida-ruiz
** File description:
** my_putchar_err
*/

#include <unistd.h>
#include "c_lib.h"

void my_putchar_err(char c)
{
    write(2, &c, 1);
}
