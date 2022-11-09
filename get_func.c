#include "main.h"

/**
 * get_func - char to function
 * @x: variable to the function
 * Return: function
 */

int (*get_func(char x))(va_list)
{
int i = 0;
struc arr[] = {
{"c", print_c},
{"s", print_s},
{"%", print_percent},
{"d", print_d},
{"i", print_i},
{NULL, NULL}
};
while (arr[i].valid)
{
if (x == arr[i].valid[0])
return (arr[i].f);
i++;
}
return (NULL);
}
