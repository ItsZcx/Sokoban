/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** Write a function that counts and returns the number of
** characters found in the column passed as parameter.
*/

int my_columlen(char *str)
{
    int count = 0;

    while (str[count] != '\n')
        count = count + 1;
    return (count);
}
