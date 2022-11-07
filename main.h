#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>

/**
 * struct structure - structure
 * @valid: character
 * @f: function
 */

typedef struct structure
{
char *valid;
int (*f)(va_list);
} spec;

int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int print_percent(va_list args);
int (*get_func(char x))(va_list args);

#endif
