/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_put_unsigned
*/

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "../includes/my.h"

void my_put_unsigned(unsigned int nb)
{
    unsigned int d = 0;

    if (nb == 10) {
        my_putchar('1');
    }
    d = nb % 10;
    if (nb > 10) {
        my_put_unsigned(nb / 10);
    }
    my_putchar(d + 48);
}

void my_print_unsigned(va_list list)
{
    unsigned int nb = va_arg(list, unsigned int);
    long no = 0, rem, c = 1;
    while (nb != 0) {
        rem = nb % 2;
        no = nb + rem * c;
        c = c * 10;
        nb = nb / 2;
    }
    my_put_unsigned(nb);
}
