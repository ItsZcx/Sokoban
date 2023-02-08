/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-myls-joan-pau.merida-ruiz
** File description:
** prototypes
*/

#ifndef C_LIB_H
    #define C_LIB_H

    void my_putchar(char c);
    void my_putchar_err(char c);
    void my_putstr(char const *str);
    void my_putstr_err(char const *str);
    int my_strlen(char *str);
    char **my_str_to_word_array(char *str, char separator);
    int my_strcmp(char *str_1, char *str_2);
    int my_columlen(char *str);

#endif
