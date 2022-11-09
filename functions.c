#include "main.h"

/**
 * print_c - prints character
 * @args: character argument
 * Return: number of characters
 */

int print_c(va_list args)
{
int c;
c = va_arg(args, int);
return (_putchar(c));
}

/**
 * print_s - prints a string
 * @args: string  argument
 * Return: number of characters
 */

int print_s(va_list args)
{
int i, number = 0;
char *str;
i = 0;
str = va_arg(args, char*);
if (str == NULL)
str = "(null)";
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
number++;
}
return (number);
}

/**
 * print_percent - percent
 * @args: argument
 * Return: return percent
 */

int print_percent(va_list args)
{
char *str
str = "%";
return (*str);
}

/**
 * print_d - prints decimal
 * @args: decimal argument
 * Return: number
 */

int print_d(va_list args)
{
int n = va_arg(args, int);
int i;
int count = 1;
int number = 0;
if (n < 0)
{
n = (n * -1);
number += _putchar('-');
}
i = n;
while (i > 9)
{
i /= 10;
count *= 10;
}
while (count >= 1)
{
number += _putchar(((n / count) % 10) + '0');
count /= 10;
}
return (number);
}

/**
 * print_i - prints integer
 * @args: integer argument
 * Return: function
 */

int print_i(va_list args)
{
return (print_d(args));
}
