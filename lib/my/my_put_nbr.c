/*
** EPITECH PROJECT, 2020
** a
** File description:
** my_put_nbr
*/

#include "rush3.h"
#include <unistd.h>

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb <= 9)
        my_putchar(nb + 48);
    else if (nb > 9) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (0);
}