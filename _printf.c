#include "main.h"

/**
 * _printf - printf function
 * @format: string with format specifier
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
int (*narg)(va_list);
int number = 0;
int i = 0;
va_list args;

va_start(args, format);
if (format != NULL)
{
if (format[0] == '%' && format[1] == '\0')
return (-1);
while (format != NULL && format[i] != '\0')
{
if (format[i] == '%')
{
if (format[i + 1] == '%')
{
number += _putchar(format[i]);
i += 2;
}
else
{
narg = get_func(format[i + 1]);
if (narg)
number += narg(args);
else
number = _putchar(format[i]) + _putchar(format[i + 1]);
i += 2;
}
}
else
{
number += _putchar(format[i]);
i++;
}
}
va_end(args);
return (number);
}
return (-1);
}
