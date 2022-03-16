/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** tkt
*/

#include "rush3.h"

void my_putstr(char *str)
{
    for (int x = 0; str[x] != '\0'; x++)
        my_putchar(str[x]);
}
