#include "main.h"
/**
* _puts - Prints a string
*@str: The string to print
*
*Return: is void
*/
void _puts(char *str)
{
while (*str != 0)
{
_putchar(*str);
&*str++;
}
putchar('\n');
}
