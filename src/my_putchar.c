/*
** EPITECH PROJECT, 2021
** day03
** File description:
** My Put Char
*/

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_print_char(va_list list)
{
    char c = va_arg(list, char);
    write(1, &c, 1);
}