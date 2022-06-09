/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_put_octal
*/

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "../includes/my.h"

int print_digits(int result)
{
    if (result < 10) {
        my_putchar('0');
        my_putchar('0');
    } else if (result < 100) {
        my_putchar('0');
    }
    my_put_nbr(result);
    return result;
}

int decimal_octal(int n)
{
    int rem;
    int i = 1;
    int result = 0;

    while (n != 0)
    {
        rem = n % 8;
        n /= 8;
        result += rem * i;
        i *= 10;
    }
    print_digits(result);
    return result;
}

void my_put_octal(va_list list)
{
    char *str = va_arg(list, char *);
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            decimal_octal((int)str[i]);
        } else {
            my_putchar(str[i]);
        }
    }
}