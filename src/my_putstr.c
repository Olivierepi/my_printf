/*
** EPITECH PROJECT, 2021
** day04
** File description:
** my put str
*/

#include <stdio.h>
#include <stdarg.h>
#include "../includes/my.h"

void my_putstr(va_list list)
{
    char *str = va_arg(list, char *);
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
}
