/*
** EPITECH PROJECT, 2022
** B-CPE-110-BAR-1-1-BSQ-joan-pau.merida-ruiz
** File description:
** my_str_to_word_arr
*/
//hacer free en la funcion final del otro programa

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "c_lib.h"

char *word_finder(char *src, char separator, int l_count, int pos)
{
    char *dest = malloc(sizeof(char) * (l_count + 3));
    int i = 0;

    while (src[pos] != separator) {
        dest[i] = src[pos];
        pos++;
        i++;
    }
    dest[i] = '\n';
    dest[i + 1] = '\0';
    return (dest);
}

int letter_counter(char *str, char separator, int i)
{
    int l_count = 0;

    while (str[i] != separator) {
        l_count++;
        i++;
    }
    return (l_count);
}

int num_of_words(char *str, char separator, int i, int *words_count)
{
    while (str[i] != '\0') {
        if (str[i] == separator) {
            (*words_count)++;
        }
        i++;
    }
    return (*words_count);
}

char **my_str_to_word_array(char *str, char separator)
{
    char **arr;
    int l_count;
    int i = 0;
    int arr_pos = 0;
    int words_count = 1;

    num_of_words(str, separator, i, &words_count);
    arr = malloc(sizeof(char *) * (words_count + 1));
    while (str[i] != '\0') {
        if (arr_pos < words_count) {
            l_count = letter_counter(str, separator, i);
            arr[arr_pos] = word_finder(str, separator, l_count, i);
            arr_pos++;
            i += l_count;
        }
        i++;
    }
    arr[words_count - 1] = NULL;
    return (arr);
}
