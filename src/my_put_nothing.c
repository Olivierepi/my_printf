/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_put_nothing
*/

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "../includes/my.h"

void my_put_nothing(va_list list)
{
    char c = va_arg(list, char);
}