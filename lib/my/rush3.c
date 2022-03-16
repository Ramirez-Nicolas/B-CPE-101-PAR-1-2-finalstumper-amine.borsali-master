/*
** EPITECH PROJECT, 2020
** a
** File description:
** rush3
*/

#include "rush3.h"
#include <stdio.h>

void ultra_special_cases(int collumn, int line)
{
    my_putstr("[rush1-3] ");
    my_put_nbr(collumn);
    my_putchar(' ');
    my_put_nbr(line);
    my_putstr(" || [rush1-4] ");
    my_put_nbr(collumn);
    my_putchar(' ');
    my_put_nbr(line);
    my_putstr(" || [rush1-5] ");
    my_put_nbr(collumn);
    my_putchar(' ');
    my_put_nbr(line);
}

int specialcase(char *buff, int collumn, int line, int len)
{   if (buff[0] == 'B') {
        ultra_special_cases(collumn, line);
    }
    if (buff[0] == 'A' && buff[collumn - 1] == 'A') {
        my_putstr("[rush1-3] ");
        my_put_nbr(collumn);
        my_putchar(' ');
        my_put_nbr(line);
    }
    if (buff[0] == 'A' && buff[collumn - 1] == 'C' && buff[len - 2] == 'C') {
        my_putstr("[rush1-4] ");
        my_put_nbr(collumn);
        my_putchar(' ');
        my_put_nbr(line);
    }
    if (buff[0] == 'A' && buff[collumn - 1] == 'C' && buff[len - 2] == 'A') {
        my_putstr("[rush1-5] ");
        my_put_nbr(collumn);
        my_putchar(' ');
        my_put_nbr(line);
    }
    my_putchar('\n');
    return 0;
}

int more_char(char *buff, int collumn, int line, int len)
{
    if (buff[0] == 'o') {
        my_putstr("[rush1-1] ");
        my_put_nbr(collumn);
        my_putchar(' ');
        my_put_nbr(line);
        my_putchar('\n');
        return (0);
    }
    if (buff[0] == '*' || buff[0] == '/') {
        my_putstr("[rush1-2] ");
        my_put_nbr(collumn);
        my_putchar(' ');
        my_put_nbr(line);
        my_putchar('\n');
        return (0);
    }
    else {
        specialcase(buff, collumn, line, len);
        return (0);
    }
}

int one_char(char *buff)
{
    if (buff[0] == 'B') {
        my_putstr("[rush1-3] 1 1 || [rush1-4] 1 1 || [rush1-5] 1 1\n");
        return (0);
    }
    if (buff[0] == 'o') {
        my_putstr("[rush1-1] 1 1\n");
        return (0);
    }
    if (buff[0] == '*') {
        my_putstr("[rush1-2] 1 1\n");
        return (0);
    }
    my_putstr("none\n");
    return (84);
}

int rush(char *buff)
{
    int collumn = 0;
    int line = 0;
    int len = 0;
    for (; buff[collumn] != '\n'; collumn++)
    for (; buff[len] != '\0'; len++) {
        if (buff[len] == '\n')
            line++;
    }
    if (len == 2) {
        one_char(buff);
        return (0);
    }
    more_char(buff, collumn, line, len);
    return (0);
}
