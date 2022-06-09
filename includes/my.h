/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <stdarg.h>
#include <stdio.h>

void my_print_char(va_list list);
void my_putstr(va_list list);
void my_print_nbr(va_list list);
void my_put_nbr(int nb);
void my_print_unsigned(va_list list);
void my_put_unsigned(unsigned int nb);
void my_put_nothing(va_list list);
void my_put_octal(va_list list);
void my_putchar(char c);

struct indicator_type
{
    char indicator;
    void (*ptr_on_func)(va_list list);
};

typedef struct indicator_type indicator_type;

static indicator_type tab[] =
{
    {'c', my_print_char},
    {'s', my_putstr},
    {'d', my_print_nbr},
    {'i', my_print_nbr},
    {'n', my_put_nothing},
    {'S', my_put_octal},
    {'b', my_print_unsigned},
};

#endif
