#include "main.h"

/**
 * print_c - prints character
 * @args: character argument
 * Return: number of characters
 */

int print_c(va_list args)
{
char c;
c = va_arg(args, char);
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
 * print_d - fetch decimal integer
 *
 */
int print_d(va_list args)
{
	float d;
	unsigned int i;

	for (i = 0; i < 0; i++)
	{
	
		
		


	_putchar("d");
	
	
	
/**
 * print_i - desc
 *
 */	
int print_i(va_list args)
{

	_putchar("i");

